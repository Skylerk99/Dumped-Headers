/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:36 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct CGPath* CGPathRef;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct {
	[4 field1];
} SCD_Struct_SK5;

typedef struct {
	unsigned long long field1;
	id field2;
	unsigned long long field3;
	unsigned long long field4[5];
} SCD_Struct_SK6;

typedef struct _compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned short, std::__1::__value_type<unsigned short, SKSpriteNode *>, std::__1::less<unsigned short>, true> > {
	unsigned long long __first_;
} compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned short, std::__1::__value_type<unsigned short, SKSpriteNode *>, std::__1::less<unsigned short>, true> >;

typedef struct _tree_end_node<std::__1::__tree_node_base<void *> *> {
	__tree_node_base<void *> __left_;
} tree_end_node<std::__1::__tree_node_base<void *> *>;

typedef struct _compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned short, SKSpriteNode *>, void *> > > {
	tree_end_node<std::__1::__tree_node_base<void *> *> __first_;
} compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned short, SKSpriteNode *>, void *> > >;

typedef struct _tree<std::__1::__value_type<unsigned short, SKSpriteNode *>, std::__1::__map_value_compare<unsigned short, std::__1::__value_type<unsigned short, SKSpriteNode *>, std::__1::less<unsigned short>, true>, std::__1::allocator<std::__1::__value_type<unsigned short, SKSpriteNode *> > > {
	__tree_node<std::__1::__value_type<unsigned short, SKSpriteNode *>, void *> __begin_node_;
	compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned short, SKSpriteNode *>, void *> > > __pair1_;
	compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned short, std::__1::__value_type<unsigned short, SKSpriteNode *>, std::__1::less<unsigned short>, true> > __pair3_;
} tree<std::__1::__value_type<unsigned short, SKSpriteNode *>, std::__1::__map_value_compare<unsigned short, std::__1::__value_type<unsigned short, SKSpriteNode *>, std::__1::less<unsigned short>, true>, std::__1::allocator<std::__1::__value_type<unsigned short, SKSpriteNode *> > >;

typedef struct map<unsigned short, SKSpriteNode *, std::__1::less<unsigned short>, std::__1::allocator<std::__1::pair<const unsigned short, SKSpriteNode *> > > {
	tree<std::__1::__value_type<unsigned short, SKSpriteNode *>, std::__1::__map_value_compare<unsigned short, std::__1::__value_type<unsigned short, SKSpriteNode *>, std::__1::less<unsigned short>, true>, std::__1::allocator<std::__1::__value_type<unsigned short, SKSpriteNode *> > > __tree_;
} map<unsigned short, SKSpriteNode *, std::__1::less<unsigned short>, std::__1::allocator<std::__1::pair<const unsigned short, SKSpriteNode *> > >;

typedef struct _compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned short, std::__1::__value_type<unsigned short, double>, std::__1::less<unsigned short>, true> > {
	unsigned long long __first_;
} compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned short, std::__1::__value_type<unsigned short, double>, std::__1::less<unsigned short>, true> >;

typedef struct _compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned short, double>, void *> > > {
	tree_end_node<std::__1::__tree_node_base<void *> *> __first_;
} compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned short, double>, void *> > >;

typedef struct _tree<std::__1::__value_type<unsigned short, double>, std::__1::__map_value_compare<unsigned short, std::__1::__value_type<unsigned short, double>, std::__1::less<unsigned short>, true>, std::__1::allocator<std::__1::__value_type<unsigned short, double> > > {
	__tree_node<std::__1::__value_type<unsigned short, double>, void *> __begin_node_;
	compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned short, double>, void *> > > __pair1_;
	compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned short, std::__1::__value_type<unsigned short, double>, std::__1::less<unsigned short>, true> > __pair3_;
} tree<std::__1::__value_type<unsigned short, double>, std::__1::__map_value_compare<unsigned short, std::__1::__value_type<unsigned short, double>, std::__1::less<unsigned short>, true>, std::__1::allocator<std::__1::__value_type<unsigned short, double> > >;

typedef struct map<unsigned short, double, std::__1::less<unsigned short>, std::__1::allocator<std::__1::pair<const unsigned short, double> > > {
	tree<std::__1::__value_type<unsigned short, double>, std::__1::__map_value_compare<unsigned short, std::__1::__value_type<unsigned short, double>, std::__1::less<unsigned short>, true>, std::__1::allocator<std::__1::__value_type<unsigned short, double> > > __tree_;
} map<unsigned short, double, std::__1::less<unsigned short>, std::__1::allocator<std::__1::pair<const unsigned short, double> > >;

typedef struct _compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, double>, std::__1::less<unsigned int>, true> > {
	unsigned long long __first_;
} compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, double>, std::__1::less<unsigned int>, true> >;

typedef struct _compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, double>, void *> > > {
	tree_end_node<std::__1::__tree_node_base<void *> *> __first_;
} compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, double>, void *> > >;

typedef struct _tree<std::__1::__value_type<unsigned int, double>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, double>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, double> > > {
	__tree_node<std::__1::__value_type<unsigned int, double>, void *> __begin_node_;
	compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, double>, void *> > > __pair1_;
	compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, double>, std::__1::less<unsigned int>, true> > __pair3_;
} tree<std::__1::__value_type<unsigned int, double>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, double>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, double> > >;

typedef struct map<unsigned int, double, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, double> > > {
	tree<std::__1::__value_type<unsigned int, double>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, double>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, double> > > __tree_;
} map<unsigned int, double, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, double> > >;

typedef struct CGImage* CGImageRef;

typedef struct {
	float x;
	float y;
} SCD_Struct_IK21;

typedef union GLKVector2 {
	SCD_Struct_IK21 field1;
	SCD_Struct_IK21 field2;
	float v[2];
} GLKVector2;

typedef struct _long {
	char* __data_;
	unsigned long long __size_;
	unsigned long long __cap_;
} long;

typedef struct {
	unsigned char __size_;
} SCD_Struct_SK24;

typedef struct _raw {
	unsigned long long __words[3];
} raw;

typedef struct _short {
	char __data_[23];
	SCD_Struct_SK24 ;
} short;

typedef struct _rep {
	/*function pointer*/void* ;
	long __l;
	short __s;
	const aw) __r;
} rep;

typedef struct _compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > {
	const ep __first_;
} compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >;

typedef struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {
	compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > __r_;
} basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >;

typedef struct shared_ptr<jet_texture> {
	jet_texture __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<jet_texture>;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKTexture *>, void *> *> > {
	unsigned long long __first_;
} compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKTexture *>, void *> *> >;

typedef struct _compressed_pair<unsigned long, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKTexture *>, std::__1::hash<std::__1::basic_string<char> >, true> > {
	unsigned long long __first_;
} compressed_pair<unsigned long, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKTexture *>, std::__1::hash<std::__1::basic_string<char> >, true> >;

typedef struct _compressed_pair<float, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKTexture *>, std::__1::equal_to<std::__1::basic_string<char> >, true> > {
	float __first_;
} compressed_pair<float, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKTexture *>, std::__1::equal_to<std::__1::basic_string<char> >, true> >;

typedef struct _hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKTexture *>, void *> *> {
	__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKTexture *>, void *> __next_;
} hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKTexture *>, void *> *>;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKTexture *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKTexture *>, void *> > > {
	hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKTexture *>, void *> *> __first_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKTexture *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKTexture *>, void *> > >;

typedef struct _bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKTexture *>, void *> *> > {
	compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKTexture *>, void *> *> > __data_;
} bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKTexture *>, void *> *> >;

typedef struct _compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKTexture *>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKTexture *>, void *> *> > > {
	__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKTexture *>, void *> __first_;
	bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKTexture *>, void *> *> > __second_;
} compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKTexture *>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKTexture *>, void *> *> > >;

typedef struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKTexture *>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKTexture *>, void *> *> > > {
	compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKTexture *>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKTexture *>, void *> *> > > __ptr_;
} unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKTexture *>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKTexture *>, void *> *> > >;

typedef struct _hash_table<std::__1::__hash_value_type<std::__1::basic_string<char>, SKTexture *>, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKTexture *>, std::__1::hash<std::__1::basic_string<char> >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKTexture *>, std::__1::equal_to<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char>, SKTexture *> > > {
	unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKTexture *>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKTexture *>, void *> *> > > __bucket_list_;
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKTexture *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKTexture *>, void *> > > __p1_;
	compressed_pair<unsigned long, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKTexture *>, std::__1::hash<std::__1::basic_string<char> >, true> > __p2_;
	compressed_pair<float, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKTexture *>, std::__1::equal_to<std::__1::basic_string<char> >, true> > __p3_;
} hash_table<std::__1::__hash_value_type<std::__1::basic_string<char>, SKTexture *>, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKTexture *>, std::__1::hash<std::__1::basic_string<char> >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKTexture *>, std::__1::equal_to<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char>, SKTexture *> > >;

typedef struct unordered_map<std::__1::basic_string<char>, SKTexture *, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, SKTexture *> > > {
	hash_table<std::__1::__hash_value_type<std::__1::basic_string<char>, SKTexture *>, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKTexture *>, std::__1::hash<std::__1::basic_string<char> >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKTexture *>, std::__1::equal_to<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char>, SKTexture *> > > __table_;
} unordered_map<std::__1::basic_string<char>, SKTexture *, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, SKTexture *> > >;

typedef struct {
	double beginTime;
	double duration;
	int bodyCount;
} SCD_Struct_SK41;

typedef struct {
	double beginTime;
	double duration;
	int opCount;
	int quadCount;
	int nodeTraversalCount;
	int nodeRenderCount;
	int drawCallCount;
	int passCount;
} SCD_Struct_SK42;

typedef struct SKCStats {
	/*function pointer*/void* _vptr$SKCStats;
	double frameBeginTime;
	double frameDuration;
	double baseTime;
	double currentTime;
	int frameCount;
	CGPoint clientUpdate;
	CGPoint update;
	SCD_Struct_SK41 physics;
	SCD_Struct_SK41 constraints;
	SCD_Struct_SK42 render;
} SKCStats;

typedef struct shared_ptr<jet_framebuffer> {
	jet_framebuffer __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<jet_framebuffer>;

typedef struct shared_ptr<jet_fence> {
	jet_fence __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<jet_fence>;

typedef struct shared_ptr<jet_program> {
	jet_program __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<jet_program>;

typedef struct _compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<jet_buffer_pool> >, std::__1::less<std::__1::basic_string<char> >, true> > {
	unsigned long long __first_;
} compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<jet_buffer_pool> >, std::__1::less<std::__1::basic_string<char> >, true> >;

typedef struct _compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<jet_buffer_pool> >, void *> > > {
	tree_end_node<std::__1::__tree_node_base<void *> *> __first_;
} compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<jet_buffer_pool> >, void *> > >;

typedef struct _tree<std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<jet_buffer_pool> >, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<jet_buffer_pool> >, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<jet_buffer_pool> > > > {
	__tree_node<std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<jet_buffer_pool> >, void *> __begin_node_;
	compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<jet_buffer_pool> >, void *> > > __pair1_;
	compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<jet_buffer_pool> >, std::__1::less<std::__1::basic_string<char> >, true> > __pair3_;
} tree<std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<jet_buffer_pool> >, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<jet_buffer_pool> >, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<jet_buffer_pool> > > >;

typedef struct map<std::__1::basic_string<char>, std::__1::shared_ptr<jet_buffer_pool>, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::shared_ptr<jet_buffer_pool> > > > {
	tree<std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<jet_buffer_pool> >, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<jet_buffer_pool> >, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<jet_buffer_pool> > > > __tree_;
} map<std::__1::basic_string<char>, std::__1::shared_ptr<jet_buffer_pool>, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::shared_ptr<jet_buffer_pool> > > >;

typedef struct __CTFont* CTFontRef;

typedef struct {
	float x;
	float y;
	float z;
} SCD_Struct_SK52;

typedef union GLKVector3 {
	SCD_Struct_SK52 field1;
	SCD_Struct_SK52 field2;
	SCD_Struct_SK52 field3;
	float v[3];
} GLKVector3;

typedef struct {
	float x;
	float y;
	float z;
	float w;
} SCD_Struct_SK54;

typedef union GLKVector4 {
	SCD_Struct_SK54 field1;
	SCD_Struct_SK54 field2;
	SCD_Struct_SK54 field3;
	float v[4];
} GLKVector4;

typedef union GLKMatrix2 {
	SCD_Struct_SK54 field1;
	float m2[2][2];
	float m[4];
} GLKMatrix2;

typedef struct {
	float m00;
	float m01;
	float m02;
	float m10;
	float m11;
	float m12;
	float m20;
	float m21;
	float m22;
} SCD_Struct_SK57;

typedef union GLKMatrix3 {
	SCD_Struct_SK57 field1;
	float m[9];
} GLKMatrix3;

typedef struct {
	float m00;
	float m01;
	float m02;
	float m03;
	float m10;
	float m11;
	float m12;
	float m13;
	float m20;
	float m21;
	float m22;
	float m23;
	float m30;
	float m31;
	float m32;
	float m33;
} SCD_Struct_SK59;

typedef union GLKMatrix4 {
	SCD_Struct_SK59 field1;
	float m[16];
} GLKMatrix4;

typedef union {
	float _floatValue;
	GLKVector2 _floatVector2Value;
	GLKVector3 _floatVector3Value;
	GLKVector4 _floatVector4Value;
	GLKMatrix2 _floatMatrix2Value;
	GLKMatrix3 _floatMatrix3Value;
	GLKMatrix4 _floatMatrix4Value;
} SCD_Union_SK61;

typedef struct ALCdevice_struct* ALCdevice_structRef;

typedef struct ALCcontext_struct* ALCcontext_structRef;

typedef struct CGVector {
	double dx;
	double dy;
} CGVector;

typedef struct __IOSurface* IOSurfaceRef;

