//
//  ViewController.m
//  DeviceInfo
//
//  Created by 李海威 on 2017/2/19.
//  Copyright © 2017年 cashpie. All rights reserved.
//

#import "ViewController.h"

#import "QBDeviceInfoCollection.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];    
    
    NSLog(@"%@",[QBDeviceInfoCollection shareDeviceInfoCollection]);
    // Do any additional setup after loading the view, typically from a nib.
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
