//
//  OWMParser.h
//  OpenWeatherAPIDemo
//
//  Created by Rohan Sonawane on 22/09/15.
//  Copyright (c) 2015 Rohan. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface OWMParser : NSObject

- (void)parseWeatherInfo:(id)_responseData WithCompletion:(void(^)(id parsedResponse, NSError *parserError))completion;

@end
