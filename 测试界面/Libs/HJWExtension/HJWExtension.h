//
//  HJWExtension.h
//  测试界面
//
//  Created by SaiDicaprio. on 15/6/3.
//  Copyright (c) 2015年 SaiDicaprio. All rights reserved.
//

#ifndef _____HJWExtension_h
#define _____HJWExtension_h

#ifdef DEBUG  // 调试状态
// 打开LOG功能
#define HJWLog(...) NSLog(__VA_ARGS__)
#else // 发布状态
// 关闭LOG功能
#define HJWLog(...)
#endif

// 颜色
#define HJWColor(r, g, b) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:1.0]

// 随机色
#define HJWRandomColor HJWColor(arc4random_uniform(256), arc4random_uniform(256), arc4random_uniform(256))

// 断言
#define HJWAssert2(condition, desc, returnValue) \
if ((condition) == NO) { \
    NSString *file = [NSString stringWithUTF8String:__FILE__]; \
    HJWLog(@"\n警告文件：%@\n警告行数：第%d行\n警告方法：%s\n警告描述：%@", file, __LINE__,  __FUNCTION__, desc); \
    HJWLog(@"\n如果不想看到警告信息，可以删掉HJWExtension.h中的第30、第31行"); \
    return returnValue; \
}

#define HJWAssert(condition, desc) HJWAssert2(condition, desc, )

#define HJWAssertParamNotNil2(param, returnValue) \
HJWAssert2(param, [[NSString stringWithFormat:@#param] stringByAppendingString:@"参数不能为nil"], returnValue)

#define HJWAssertParamNotNil(param) HJWAssertParamNotNil2(param, )


#endif
