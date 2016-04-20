/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:11 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SKUIDOMFeature.h>

@protocol SKUIAnimatorDOMFeatureDelegate;
@class IKAppContext, NSString;

@interface SKUIAnimatorDOMFeature : NSObject <SKUIDOMFeature> {

	id<SKUIAnimatorDOMFeatureDelegate> _delegate;
	IKAppContext* _appContext;
	NSString* _featureName;

}

@property (assign,nonatomic,__weak) id<SKUIAnimatorDOMFeatureDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * featureName;                                   //@synthesize featureName=_featureName - In the implementation block
@property (nonatomic,__weak,readonly) IKAppContext * appContext;                              //@synthesize appContext=_appContext - In the implementation block
+(id)featureName;
+(id)makeFeatureJSObjectForFeature:(id)arg1 ;
-(void)setDelegate:(id<SKUIAnimatorDOMFeatureDelegate>)arg1 ;
-(id<SKUIAnimatorDOMFeatureDelegate>)delegate;
-(NSString *)featureName;
-(IKAppContext *)appContext;
-(id)initWithDOMNode:(id)arg1 featureName:(id)arg2 ;
@end

