/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:59 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebKitLegacy/WebKitLegacy-Structs.h>
@interface WebUndoStep : NSObject {

	RefPtr<WebCore::UndoStep>* m_step;

}
+(void)initialize;
+(id)stepWithUndoStep:(PassRefPtr<WebCore::UndoStep>*)arg1 ;
-(void)dealloc;
-(void)finalize;
-(UndoStep*)step;
-(id)initWithUndoStep:(PassRefPtr<WebCore::UndoStep>*)arg1 ;
@end

