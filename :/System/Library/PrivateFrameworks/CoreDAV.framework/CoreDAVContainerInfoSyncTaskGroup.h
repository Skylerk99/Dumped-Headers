/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:00 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTaskGroup.h>
#import <CoreDAV/CoreDAVTaskDelegate.h>

@class NSString, NSURL;

@interface CoreDAVContainerInfoSyncTaskGroup : CoreDAVTaskGroup <CoreDAVTaskDelegate> {

	NSString* _previousSyncToken;
	NSURL* _containerURL;

}

@property (assign,nonatomic) id<CoreDAVContainerInfoSyncProvider> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<CoreDAVContainerInfoSyncProvider>)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(id<CoreDAVContainerInfoSyncProvider>)delegate;
-(void)startTaskGroup;
-(id)copyContainerParserMappings;
-(Class)containerItemClass;
-(id)initWithContainerURL:(id)arg1 previousSyncToken:(id)arg2 accountInfoProvider:(id)arg3 taskManager:(id)arg4 ;
-(void)task:(id)arg1 didFinishWithError:(id)arg2 ;
@end

