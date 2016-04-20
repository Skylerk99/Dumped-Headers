/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:18 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITraitEnvironment.h>

@class UITraitCollection, UIViewController, NSString;

@interface PKPaymentAuthorizationLayout : NSObject <UITraitEnvironment> {

	double _contentHeightPadding;
	double _headerMargin;
	double _contentMargin;
	double _valueLeftMargin;
	UIViewController* _controller;

}

@property (nonatomic,readonly) double contentHeightPadding;                      //@synthesize contentHeightPadding=_contentHeightPadding - In the implementation block
@property (nonatomic,readonly) double headerMargin;                              //@synthesize headerMargin=_headerMargin - In the implementation block
@property (nonatomic,readonly) double contentMargin;                             //@synthesize contentMargin=_contentMargin - In the implementation block
@property (nonatomic,readonly) double valueLeftMargin;                           //@synthesize valueLeftMargin=_valueLeftMargin - In the implementation block
@property (assign,nonatomic) UIViewController * controller;                      //@synthesize controller=_controller - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UITraitCollection * traitCollection; 
-(double)valueLeftMargin;
-(double)contentMargin;
-(id)initWithController:(id)arg1 ;
-(double)contentHeightPadding;
-(UITraitCollection *)traitCollection;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIViewController *)controller;
-(void)setController:(UIViewController *)arg1 ;
-(double)headerMargin;
@end

