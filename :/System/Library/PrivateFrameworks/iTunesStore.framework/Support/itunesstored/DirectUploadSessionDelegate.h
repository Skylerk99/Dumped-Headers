/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:07 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DirectUploadSessionDelegate <NSObject>
@optional
-(void)uploadSessionController:(id)arg1 taskDidStopWithDatabaseID:(long long)arg2;
-(void)uploadSessionController:(id)arg1 uploadDidFinishWithDatabaseID:(long long)arg2 response:(id)arg3;
-(void)uploadSessionController:(id)arg1 uploadDidBeginTransferWithDatabaseID:(long long)arg2;
-(void)uploadSessionController:(id)arg1 uploadDidFailWithDatabaseID:(long long)arg2 error:(id)arg3;
-(void)uploadSessionController:(id)arg1 uploadProgressDidChange:(id)arg2;

@end

