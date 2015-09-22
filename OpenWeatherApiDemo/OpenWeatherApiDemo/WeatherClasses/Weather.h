//
//  Weather.h
//  OpenWeatherAPIDemo
//
//  Created by Rohan Sonawane on 23/09/15.
//  Copyright (c) 2015 Rohan. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "City.h"

@interface Weather : NSObject

@property(nonatomic, retain)City *city;
@property(nonatomic, assign)int count;
@property(nonatomic, retain)NSArray *forecastArray;

@end
