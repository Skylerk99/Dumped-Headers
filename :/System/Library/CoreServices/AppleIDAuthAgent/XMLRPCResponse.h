/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:17 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/AppleIDAuthAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface XMLRPCResponse : NSObject {

	NSString* myBody;
	id myObject;
	BOOL isFault;

}
-(id)faultCode;
-(id)faultString;
-(BOOL)isFault;
-(void)dealloc;
-(id)object;
-(id)initWithData:(id)arg1 ;
-(id)body;
@end

