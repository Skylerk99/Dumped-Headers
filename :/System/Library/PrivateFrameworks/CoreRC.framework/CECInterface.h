/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:10 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRC/CoreRC-Structs.h>
#import <CoreRC/CoreRCInterface.h>

@protocol CECInterfaceDelegate;
@class NSDictionary;

@interface CECInterface : CoreRCInterface {

	BOOL _promiscMode;
	unsigned short _addressMask;
	id<CECInterfaceDelegate> _delegate;
	CECFrame _lastReceivedFrame;

}

@property (assign,nonatomic) id<CECInterfaceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned short addressMask;                   //@synthesize addressMask=_addressMask - In the implementation block
@property (nonatomic,readonly) BOOL promiscMode;                             //@synthesize promiscMode=_promiscMode - In the implementation block
@property (nonatomic,readonly) NSDictionary * properties; 
@property (nonatomic,readonly) BOOL isValid; 
@property (nonatomic,readonly) CECFrame lastReceivedFrame;                   //@synthesize lastReceivedFrame=_lastReceivedFrame - In the implementation block
-(BOOL)sendMessage:(id)arg1 error:(id*)arg2 ;
-(BOOL)sendMessage:(id)arg1 withRetryCount:(unsigned char)arg2 error:(id*)arg3 ;
-(void)setDelegate:(id<CECInterfaceDelegate>)arg1 ;
-(id)init;
-(id<CECInterfaceDelegate>)delegate;
-(BOOL)isValid;
-(NSDictionary *)properties;
-(BOOL)sendFrame:(CECFrame)arg1 withRetryCount:(unsigned char)arg2 error:(id*)arg3 ;
-(BOOL)pingTo:(unsigned char)arg1 acknowledged:(BOOL*)arg2 error:(id*)arg3 ;
-(unsigned short)addressMask;
-(BOOL)promiscMode;
-(void)receivedFrame:(CECFrame)arg1 ;
-(BOOL)errorIsNack:(id)arg1 ;
-(BOOL)setAddressMask:(unsigned short)arg1 error:(id*)arg2 ;
-(BOOL)setPromiscMode:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)sendFrame:(CECFrame)arg1 error:(id*)arg2 ;
-(void)hibernationChanged:(BOOL)arg1 ;
-(BOOL)allocateCECAddress:(unsigned char*)arg1 forDeviceType:(unsigned char)arg2 error:(id*)arg3 ;
-(BOOL)deallocateCECAddress:(unsigned char)arg1 error:(id*)arg2 ;
-(CECFrame)lastReceivedFrame;
@end

