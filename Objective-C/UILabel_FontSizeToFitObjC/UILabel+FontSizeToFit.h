//
//  UILabel+FontSizeToFit.h
//  UILabel_FontSizeToFitObjC
//
//  Created by FukuyamaShingo on 2/22/16.
//  Copyright © 2016 FukuyamaShingo. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UILabel (FontSizeToFit)

- (void)fontSizeToFit;
- (void)fontSizeToFitWithMinimumFontScale:(CGFloat)minimumFontScale diminishRate:(CGFloat)diminishRate;

@end
