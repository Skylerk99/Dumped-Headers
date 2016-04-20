/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:13 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class ISOperation;

@interface SUScriptOperation : ISOperation {

	id _options;
	ISOperation* _wrappedOperation;

}
+(Class)postOperationClassForType:(id)arg1 ;
+(void)registerPostOperationClass:(Class)arg1 forType:(id)arg2 ;
-(void)dealloc;
-(void)run;
-(id)initWithPostType:(id)arg1 options:(id)arg2 ;
-(id)initWithOperation:(id)arg1 options:(id)arg2 ;
-(void)setScriptOptions:(id)arg1 ;
-(void)_sendCompletionCallback;
-(id)_scriptOptions;
@end

