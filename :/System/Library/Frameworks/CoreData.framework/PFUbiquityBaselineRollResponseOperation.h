/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:14 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/PFUbiquityBaselineRollOperation.h>

@interface PFUbiquityBaselineRollResponseOperation : PFUbiquityBaselineRollOperation

@property (assign) NSObject*<PFUbiquityBaselineRollResponseOperationDelegate> delegate; 
-(id)retainedDelegate;
-(BOOL)canAdoptBaseline:(id)arg1 byReplacingLocalStoreFile:(BOOL*)arg2 withStack:(id)arg3 withError:(id*)arg4 ;
-(void)setDelegate:(NSObject*<PFUbiquityBaselineRollResponseOperationDelegate>)arg1 ;
-(NSObject*<PFUbiquityBaselineRollResponseOperationDelegate>)delegate;
-(void)main;
@end

