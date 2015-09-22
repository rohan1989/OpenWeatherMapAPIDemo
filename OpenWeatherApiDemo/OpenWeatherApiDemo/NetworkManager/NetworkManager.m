//
//  NetworkManager.m
//  OpenWeatherAPIDemo
//
//  Created by Rohan Sonawane on 22/09/15.
//  Copyright (c) 2015 Rohan. All rights reserved.
//

#import "NetworkManager.h"
#import "OWMParser.h"

@implementation NetworkManager

- (void)networkRequestWithURL:(NSString *)_requestURL WithCompletion:(void(^)(id response, NSError *error))completion
{
    NSURLSessionConfiguration *_sessionConfiguration = [NSURLSessionConfiguration defaultSessionConfiguration];
    NSURLSession *_session = [NSURLSession sessionWithConfiguration:_sessionConfiguration];
    
    NSURLSessionDataTask *_dataTask = [_session dataTaskWithURL:[NSURL URLWithString:_requestURL] completionHandler:^(NSData *data, NSURLResponse *response, NSError *error) {
        if(!error && data && [data length])
        {
            OWMParser *_parser = [[OWMParser alloc] init];
            [_parser parseWeatherInfo:data WithCompletion:^(id parsedResponse, NSError *parserError) {
                
            }];
        }
        else
        {
            completion(nil, error);
        }
    }];
    [_dataTask resume];
}

@end
