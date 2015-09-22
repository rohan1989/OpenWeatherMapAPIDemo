//
//  NetworkManager.h
//  OpenWeatherAPIDemo
//
//  Created by Rohan Sonawane on 22/09/15.
//  Copyright (c) 2015 Rohan. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NetworkManager : NSObject

- (void)networkRequestWithURL:(NSString *)_requestURL WithCompletion:(void(^)(id response, NSError *error))completion;

@end
