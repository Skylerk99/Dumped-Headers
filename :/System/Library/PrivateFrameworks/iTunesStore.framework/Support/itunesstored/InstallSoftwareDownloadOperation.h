/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:08 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunesstored/FinishDownloadStepOperation.h>
#import <libobjc.A.dylib/ISOperationDelegate.h>

@class NSString;

@interface InstallSoftwareDownloadOperation : FinishDownloadStepOperation <ISOperationDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)_downloadSecondaryAssets:(id*)arg1 ;
-(void)_monitorForTerminationOfBundleID:(id)arg1 ;
-(id)_newSoftwarePropertiesWithDownload:(id)arg1 ;
-(void)run;
-(void)operation:(id)arg1 updatedProgress:(id)arg2 ;
@end

