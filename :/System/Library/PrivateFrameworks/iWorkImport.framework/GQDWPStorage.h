/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:19 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class GQDSStylesheet;

@interface GQDWPStorage : NSObject {

	GQDSStylesheet* mStylesheet;
	CFArrayRef mBody;
	CFArrayRef mAttachments;

}
-(void)dealloc;
-(CFArrayRef)attachments;
-(id)stylesheet;
@end

