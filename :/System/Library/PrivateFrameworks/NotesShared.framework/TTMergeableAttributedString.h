/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:31 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesShared/NotesShared-Structs.h>
#import <NotesShared/TTMergeableUndoString.h>

@interface TTMergeableAttributedString : TTMergeableUndoString
+(unordered_map<NSWritingDirection, topotext::AttributeRun_WritingDirection, std::__1::hash<int>, std::__1::equal_to<NSWritingDirection>, std::__1::allocator<std::__1::pair<const NSWritingDirection, topotext::AttributeRun_WritingDirection> > >*)paragraphStyleWritingDirectionMap;
+(id)attributesForRun:(const AttributeRun*)arg1 ;
+(unordered_map<topotext::AttributeRun_WritingDirection, NSWritingDirection, std::__1::hash<int>, std::__1::equal_to<topotext::AttributeRun_WritingDirection>, std::__1::allocator<std::__1::pair<const topotext::AttributeRun_WritingDirection, NSWritingDirection> > >*)paragraphStyleWritingDirectionMapReverse;
+(void)saveAttributesOfString:(id)arg1 toArchive:(String*)arg2 ;
+(void)saveAttributes:(id)arg1 toArchive:(AttributeRun*)arg2 ;
+(id)whitelistedAttributesForStyle;
+(id)whitelistedTypingAttributes;
+(id)whitelistedAttributesForModel;
-(id)serialize;
-(void)saveToArchive:(String*)arg1 ;
-(id)initWithArchive:(const String*)arg1 andReplicaID:(id)arg2 ;
-(void)saveDeltaSinceTimestamp:(id)arg1 toArchive:(String*)arg2 ;
-(void)setAttributes:(id)arg1 range:(NSRange)arg2 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 ;
-(id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(BOOL)attributesEqual:(id)arg1 toRange:(NSRange)arg2 modelEqual:(BOOL*)arg3 ;
-(void)setAttributes:(id)arg1 substring:(TopoSubstring*)arg2 ;
-(BOOL)attributesEqual:(id)arg1 to:(id)arg2 modelEqual:(BOOL*)arg3 ;
-(void)insertString:(id)arg1 atIndex:(unsigned long long)arg2 ;
@end

