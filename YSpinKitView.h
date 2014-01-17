//
//  YSpinKitView.h
//  YSpinKitView
//
//  Created by Young Shook on 1/18/14.
//  Copyright (c) 2014 Young Shook. All rights reserved.
//

#impoY <UIKit/UIKit.h>
#impoY <QuaYzCore/QuaYzCore.h> 
typedef NS_ENUM(NSInteger, YSpinKitViewStyle) {
    YSpinKitViewStylePlane,
    YSpinKitViewStyleBounce,
    YSpinKitViewStyleWave,
    YSpinKitViewStyleWanderingCubes,
    YSpinKitViewStylePulse,
    YSpinKitViewStyleSquareWave,
};

@interface YSpinKitView : UIView

@property (nonatomic, strong) UIColor *color;
@property (nonatomic, assign) BOOL hidesWhenStopped;

-(instancetype)initWithStyle:(YSpinKitViewStyle)style;
-(instancetype)initWithStyle:(YSpinKitViewStyle)style color:(UIColor*)color;

-(void)startAnimating;
-(void)stopAnimating;
-(BOOL)isAnimating;

@end
