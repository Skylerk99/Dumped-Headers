/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:20 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSHashTable, NSMapTable;

@interface SBScreenManager : NSObject {

	NSHashTable* _handlers;
	NSMapTable* _screenIDToHandlerMap;
	NSMapTable* _screenIDToLastDisplayMap;

}
+(id)sharedInstance;
-(void)_updateHandlerForConnectionToScreen:(id)arg1 ;
-(id)lastDisplayForScreenWithID:(unsigned)arg1 ;
-(id)lastDisplayForScreen:(id)arg1 ;
-(void)addConnectionHandler:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)_screenDidConnect:(id)arg1 ;
-(void)_screenDidDisconnect:(id)arg1 ;
@end

