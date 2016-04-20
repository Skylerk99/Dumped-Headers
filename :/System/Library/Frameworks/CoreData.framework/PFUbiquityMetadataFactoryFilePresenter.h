/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:14 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSFilePresenter.h>

@class NSURL, PFUbiquityLocation, NSString, NSOperationQueue;

@interface PFUbiquityMetadataFactoryFilePresenter : NSObject <NSFilePresenter> {

	NSURL* _presentedItemURL;
	PFUbiquityLocation* _presentedItemLocation;

}

@property (copy,readonly) NSURL * presentedItemURL;                                      //@synthesize presentedItemURL=_presentedItemURL - In the implementation block
@property (nonatomic,readonly) PFUbiquityLocation * presentedItemLocation;               //@synthesize presentedItemLocation=_presentedItemLocation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain,readonly) NSOperationQueue * presentedItemOperationQueue; 
@property (copy,readonly) NSURL * primaryPresentedItemURL; 
+(void)initialize;
-(id)initWithMetadataStoreFileLocation:(id)arg1 ;
-(PFUbiquityLocation *)presentedItemLocation;
-(void)dealloc;
-(id)init;
-(void)relinquishPresentedItemToReader:(/*^block*/id)arg1 ;
-(void)relinquishPresentedItemToWriter:(/*^block*/id)arg1 ;
-(void)savePresentedItemChangesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)accommodatePresentedItemDeletionWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSURL *)presentedItemURL;
-(NSOperationQueue *)presentedItemOperationQueue;
@end

