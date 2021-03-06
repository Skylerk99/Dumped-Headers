/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:08 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class SKUIGift, SKUIGiftConfiguration, SSVLoadURLOperation, NSOperationQueue;

@interface SKUIGiftStepViewController : UIViewController {

	SKUIGift* _gift;
	SKUIGiftConfiguration* _giftConfiguration;
	SSVLoadURLOperation* _loadOperation;
	NSOperationQueue* _operationQueue;

}

@property (nonatomic,readonly) SKUIGift * gift;                                        //@synthesize gift=_gift - In the implementation block
@property (nonatomic,readonly) SKUIGiftConfiguration * giftConfiguration;              //@synthesize giftConfiguration=_giftConfiguration - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                        //@synthesize operationQueue=_operationQueue - In the implementation block
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)operationQueue;
-(id)initWithGift:(id)arg1 configuration:(id)arg2 ;
-(SKUIGift *)gift;
-(SKUIGiftConfiguration *)giftConfiguration;
-(void)loadItemArtworkWithArtworkContext:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)finishGiftingWithResult:(BOOL)arg1 ;
-(void)_finishImageLoadWithImage:(id)arg1 error:(id)arg2 block:(/*^block*/id)arg3 ;
@end

