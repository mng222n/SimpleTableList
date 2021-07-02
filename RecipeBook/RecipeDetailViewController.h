//
//  RecipeDetailViewController.h
//  RecipeBook
//
//  Created by Anh Ng on 2021/07/02.
//  Copyright (c) 2021. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RecipeDetailViewController : UIViewController

@property (nonatomic, strong) IBOutlet UILabel *recipeLabel;
@property (nonatomic, strong) NSString *recipeName;

@end
