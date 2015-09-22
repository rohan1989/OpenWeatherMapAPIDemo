//
//  OWMParser.m
//  OpenWeatherAPIDemo
//
//  Created by Rohan Sonawane on 22/09/15.
//  Copyright (c) 2015 Rohan. All rights reserved.
//

#import "OWMParser.h"

@implementation OWMParser

- (void)parseWeatherInfo:(id)_responseData WithCompletion:(void(^)(id parsedResponse, NSError *parserError))completion
{
    NSError *_jsonError;
    NSDictionary *_parsedDictionary = [NSJSONSerialization JSONObjectWithData:_responseData options:0 error:&_jsonError];
    NSLog(@"_parsedDictionary: %@", _parsedDictionary);
}


@end
