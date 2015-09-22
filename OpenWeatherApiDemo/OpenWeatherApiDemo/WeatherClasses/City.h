//
//  City.h
//  OpenWeatherAPIDemo
//
//  Created by Rohan Sonawane on 23/09/15.
//  Copyright (c) 2015 Rohan. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface City : NSObject

@property(nonatomic, assign)double latitude;
@property(nonatomic, assign)double longitude;
@property(nonatomic, retain)NSString *country;
@property(nonatomic, retain)NSString *cityID;
@property(nonatomic, retain)NSString *cityName;
@property(nonatomic, assign)int population;

@end
