/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:56 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PTPInitCommandRequestPacket : NSObject {

	unsigned char _initiatorGUID[16];
	NSString* _initiatorFriendlyName;

}
-(void)dealloc;
-(id)description;
-(id)initWithInitiatorGUID:(char*)arg1 initiatorFriendlyName:(id)arg2 ;
-(id)contentForTCP;
-(id)initWithTCPBuffer:(void*)arg1 ;
-(const char*)initiatorGUID;
-(void)setInitiatorGUID:(char*)arg1 ;
-(id)initiatorFriendlyName;
-(void)setInitiatorFriendlyName:(id)arg1 ;
@end

