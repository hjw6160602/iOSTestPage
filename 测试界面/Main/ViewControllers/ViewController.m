//
//  ViewController.m
//  测试界面
//
//  Created by shoule on 15/5/20.
//  Copyright (c) 2015年 SaiDicaprio. All rights reserved.
//

#import "ViewController.h"
#import "CartViewController.h"
#import "CartCell.h"

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)MyCart {
    CartViewController *next = [CartViewController new];
    [self.navigationController pushViewController:next animated:YES];
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    return 10;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    static NSString *Ident = @"CartCell";
    CartCell* cell = [tableView dequeueReusableCellWithIdentifier:Ident];
    if (cell == nil) {
        cell =[[[NSBundle mainBundle]loadNibNamed:@"CartCell" owner:self options:nil]lastObject];
    }
    return cell;
}



@end
