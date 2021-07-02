//
//  RecipeBookViewController.h
//  RecipeBook
//
//  Created by Anh Ng on 2021/07/02.
//  Copyright (c) 2021. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RecipeBookViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> 

@property (nonatomic, strong) IBOutlet UITableView *tableView;

@end
