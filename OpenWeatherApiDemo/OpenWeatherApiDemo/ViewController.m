//
//  ViewController.m
//  OpenWeatherAPIDemo
//
//  Created by Rohan Sonawane on 21/09/15.
//  Copyright (c) 2015 Rohan. All rights reserved.
//

#import "ViewController.h"
#import "NetworkManager.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    NetworkManager *_networkManager = [[NetworkManager alloc] init];
    [_networkManager networkRequestWithURL:@"http://api.openweathermap.org/data/2.5/forecast/daily?q=Pune&mode=json&units=metric&cnt=1" WithCompletion:^(id response, NSError *error) {
        
    }];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
