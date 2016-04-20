/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:07 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString, UIViewController;

@interface UIStoryboardSegueTemplate : NSObject <NSCoding> {

	NSString* _identifier;
	NSString* _segueClassName;
	UIViewController* _viewController;
	NSString* _destinationViewControllerIdentifier;
	BOOL _performOnViewLoad;
	BOOL _animates;

}

@property (nonatomic,readonly) NSString * identifier;                               //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (assign,nonatomic) BOOL performOnViewLoad;                                //@synthesize performOnViewLoad=_performOnViewLoad - In the implementation block
@property (assign,nonatomic) BOOL animates;                                         //@synthesize animates=_animates - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSString *)identifier;
-(id)perform:(id)arg1 ;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(BOOL)performOnViewLoad;
-(id)_perform:(id)arg1 ;
-(id)_performWithDestinationViewController:(id)arg1 sender:(id)arg2 ;
-(/*^block*/id)newDefaultPerformHandlerForSegue:(id)arg1 ;
-(/*^block*/id)newDefaultPrepareHandlerForSegue:(id)arg1 ;
-(id)instantiateOrFindDestinationViewControllerWithSender:(id)arg1 ;
-(id)segueWithDestinationViewController:(id)arg1 ;
-(BOOL)animates;
-(void)setPerformOnViewLoad:(BOOL)arg1 ;
-(void)setAnimates:(BOOL)arg1 ;
@end

