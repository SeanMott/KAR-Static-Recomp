//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800B7E90.hpp"
#include "fn_800B7E90.hpp"
#include "fn_800B317C.hpp"
#include "fn_800B7E90.hpp"
#include "fn_800B317C.hpp"
#include "fn_800B7E90.hpp"
#include "fn_800B3154.hpp"
#include "fn_800B31D4.hpp"



void fn_800B31D4(PPC::Runtime::GCContext* context)
{
/*800B31D4 000AFFD4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x50, context->r1));
/*800B31D8 000AFFD8*/ PPC::Runtime::ASM::mflr(context->r0);
/*800B31DC 000AFFDC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*800B31E0 000AFFE0*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*800B31E4 000AFFE4*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*800B31E8 000AFFE8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*800B31EC 000AFFEC*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*800B31F0 000AFFF0*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*800B31F4 000AFFF4*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*800B31F8 000AFFF8*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x18);
/*800B31FC 000AFFFC*/ PPC::Runtime::ASM::bl(fn_803D2158);
/*800B3200 000B0000*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF200 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800B3204 000B0004*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*800B3208 000B0008*/ PPC::Runtime::ASM::bgt(.L_800B3224);
/*800B320C 000B000C*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_778 @ Get_MemoryOffset_HighBit);
/*800B3210 000B0010*/ PPC::Runtime::ASM::lis(context->r5, MemoryOffset_779 @ Get_MemoryOffset_HighBit);
/*800B3214 000B0014*/ PPC::Runtime::ASM::addi(context->r3, context->r3, MemoryOffset_778 @ Get_MemoryOffset_LowBit);
/*800B3218 000B0018*/ PPC::Runtime::ASM::li(context->r4, 0x6e1);
/*800B321C 000B001C*/ PPC::Runtime::ASM::addi(context->r5, context->r5, MemoryOffset_779 @ Get_MemoryOffset_LowBit);
/*800B3220 000B0020*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800B3224, 0x800B3224) //this is a jump label
/*800B3224 000B0024*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800B3228 000B0028*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x2c);
/*800B322C 000B002C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*800B3230 000B0030*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*800B3234 000B0034*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*800B3238 000B0038*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*800B323C 000B003C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*800B3240 000B0040*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*800B3244 000B0044*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*800B3248 000B0048*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*800B324C 000B004C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*800B3250 000B0050*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*800B3254 000B0054*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*800B3258 000B0058*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*800B325C 000B005C*/ PPC::Runtime::ASM::bl(fn_800B7E90);
/*800B3260 000B0060*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF200 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800B3264 000B0064*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*800B3268 000B0068*/ PPC::Runtime::ASM::bge(.L_800B32C8);
/*800B326C 000B006C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800B3270 000B0070*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x2c);
/*800B3274 000B0074*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DF1F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800B3278 000B0078*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*800B327C 000B007C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*800B3280 000B0080*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*800B3284 000B0084*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*800B3288 000B0088*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*800B328C 000B008C*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*800B3290 000B0090*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*800B3294 000B0094*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800B3298 000B0098*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*800B329C 000B009C*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*800B32A0 000B00A0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*800B32A4 000B00A4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*800B32A8 000B00A8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*800B32AC 000B00AC*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*800B32B0 000B00B0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*800B32B4 000B00B4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*800B32B8 000B00B8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*800B32BC 000B00BC*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*800B32C0 000B00C0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*800B32C4 000B00C4*/ PPC::Runtime::ASM::bl(fn_800B7E90);
RUNTIME_PPC_JUMP_LABEL(.L_800B32C8, 0x800B32C8) //this is a jump label
/*800B32C8 000B00C8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*800B32CC 000B00CC*/ PPC::Runtime::ASM::lfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r31));
/*800B32D0 000B00D0*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*800B32D4 000B00D4*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f5);
/*800B32D8 000B00D8*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*800B32DC 000B00DC*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*800B32E0 000B00E0*/ PPC::Runtime::ASM::lfs(context->f6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*800B32E4 000B00E4*/ PPC::Runtime::ASM::fmadds(context->f2, context->f2, context->f4, context->f0);
/*800B32E8 000B00E8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF1E8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800B32EC 000B00EC*/ PPC::Runtime::ASM::fmadds(context->f2, context->f3, context->f6, context->f2);
/*800B32F0 000B00F0*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f0);
/*800B32F4 000B00F4*/ PPC::Runtime::ASM::bge(.L_800B32FC);
/*800B32F8 000B00F8*/ PPC::Runtime::ASM::fneg(context->f2, context->f2);
RUNTIME_PPC_JUMP_LABEL(.L_800B32FC, 0x800B32FC) //this is a jump label
/*800B32FC 000B00FC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF22C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800B3300 000B0100*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f0);
/*800B3304 000B0104*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*800B3308 000B0108*/ PPC::Runtime::ASM::bne(.L_800B351C);
/*800B330C 000B010C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF1E8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800B3310 000B0110*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*800B3314 000B0114*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*800B3318 000B0118*/ PPC::Runtime::ASM::fcmpo(cr0, context->f4, context->f0);
/*800B331C 000B011C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*800B3320 000B0120*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*800B3324 000B0124*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800B3328 000B0128*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*800B332C 000B012C*/ PPC::Runtime::ASM::bge(.L_800B3334);
/*800B3330 000B0130*/ PPC::Runtime::ASM::fneg(context->f4, context->f4);
RUNTIME_PPC_JUMP_LABEL(.L_800B3334, 0x800B3334) //this is a jump label
/*800B3334 000B0134*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF1E8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800B3338 000B0138*/ PPC::Runtime::ASM::fcmpo(cr0, context->f5, context->f0);
/*800B333C 000B013C*/ PPC::Runtime::ASM::bge(.L_800B3344);
/*800B3340 000B0140*/ PPC::Runtime::ASM::fneg(context->f5, context->f5);
RUNTIME_PPC_JUMP_LABEL(.L_800B3344, 0x800B3344) //this is a jump label
/*800B3344 000B0144*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF1E8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800B3348 000B0148*/ PPC::Runtime::ASM::fcmpo(cr0, context->f6, context->f0);
/*800B334C 000B014C*/ PPC::Runtime::ASM::bge(.L_800B3354);
/*800B3350 000B0150*/ PPC::Runtime::ASM::fneg(context->f6, context->f6);
RUNTIME_PPC_JUMP_LABEL(.L_800B3354, 0x800B3354) //this is a jump label
/*800B3354 000B0154*/ PPC::Runtime::ASM::fcmpo(cr0, context->f5, context->f4);
/*800B3358 000B0158*/ PPC::Runtime::ASM::ble(.L_800B3378);
/*800B335C 000B015C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f5, context->f6);
/*800B3360 000B0160*/ PPC::Runtime::ASM::ble(.L_800B3378);
/*800B3364 000B0164*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DF228 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800B3368 000B0168*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*800B336C 000B016C*/ PPC::Runtime::ASM::fmadds(context->f0, context->f2, context->f1, context->f0);
/*800B3370 000B0170*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*800B3374 000B0174*/ PPC::Runtime::ASM::b(.L_800B3388);
RUNTIME_PPC_JUMP_LABEL(.L_800B3378, 0x800B3378) //this is a jump label
/*800B3378 000B0178*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DF228 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800B337C 000B017C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800B3380 000B0180*/ PPC::Runtime::ASM::fmadds(context->f0, context->f2, context->f1, context->f0);
/*800B3384 000B0184*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_800B3388, 0x800B3388) //this is a jump label
/*800B3388 000B0188*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*800B338C 000B018C*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x18);
/*800B3390 000B0190*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800B3394 000B0194*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*800B3398 000B0198*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*800B339C 000B019C*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*800B33A0 000B01A0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*800B33A4 000B01A4*/ PPC::Runtime::ASM::bl(fn_803D2158);
/*800B33A8 000B01A8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF200 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800B33AC 000B01AC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*800B33B0 000B01B0*/ PPC::Runtime::ASM::bgt(.L_800B33CC);
/*800B33B4 000B01B4*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_778 @ Get_MemoryOffset_HighBit);
/*800B33B8 000B01B8*/ PPC::Runtime::ASM::lis(context->r5, MemoryOffset_779 @ Get_MemoryOffset_HighBit);
/*800B33BC 000B01BC*/ PPC::Runtime::ASM::addi(context->r3, context->r3, MemoryOffset_778 @ Get_MemoryOffset_LowBit);
/*800B33C0 000B01C0*/ PPC::Runtime::ASM::li(context->r4, 0x6e1);
/*800B33C4 000B01C4*/ PPC::Runtime::ASM::addi(context->r5, context->r5, MemoryOffset_779 @ Get_MemoryOffset_LowBit);
/*800B33C8 000B01C8*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800B33CC, 0x800B33CC) //this is a jump label
/*800B33CC 000B01CC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800B33D0 000B01D0*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0xc);
/*800B33D4 000B01D4*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x8);
/*800B33D8 000B01D8*/ PPC::Runtime::ASM::bl(fn_800B317C);
/*800B33DC 000B01DC*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*800B33E0 000B01E0*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*800B33E4 000B01E4*/ PPC::Runtime::ASM::bl(fn_800B7E90);
/*800B33E8 000B01E8*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*800B33EC 000B01EC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF200 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800B33F0 000B01F0*/ PPC::Runtime::ASM::fcmpo(cr0, context->f31, context->f0);
/*800B33F4 000B01F4*/ PPC::Runtime::ASM::bge(.L_800B3438);
/*800B33F8 000B01F8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800B33FC 000B01FC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800B3400 000B0200*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DF1F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800B3404 000B0204*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0xc);
/*800B3408 000B0208*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*800B340C 000B020C*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x8);
/*800B3410 000B0210*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*800B3414 000B0214*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*800B3418 000B0218*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*800B341C 000B021C*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*800B3420 000B0220*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*800B3424 000B0224*/ PPC::Runtime::ASM::bl(fn_800B317C);
/*800B3428 000B0228*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*800B342C 000B022C*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*800B3430 000B0230*/ PPC::Runtime::ASM::bl(fn_800B7E90);
/*800B3434 000B0234*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
RUNTIME_PPC_JUMP_LABEL(.L_800B3438, 0x800B3438) //this is a jump label
/*800B3438 000B0238*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*800B343C 000B023C*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x18);
/*800B3440 000B0240*/ PPC::Runtime::ASM::bl(fn_800B3154);
/*800B3444 000B0244*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF1E8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800B3448 000B0248*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*800B344C 000B024C*/ PPC::Runtime::ASM::bge(.L_800B3454);
/*800B3450 000B0250*/ PPC::Runtime::ASM::fneg(context->f1, context->f1);
RUNTIME_PPC_JUMP_LABEL(.L_800B3454, 0x800B3454) //this is a jump label
/*800B3454 000B0254*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF22C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800B3458 000B0258*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*800B345C 000B025C*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*800B3460 000B0260*/ PPC::Runtime::ASM::bne(.L_800B3514);
/*800B3464 000B0264*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*800B3468 000B0268*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF1E8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800B346C 000B026C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*800B3470 000B0270*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*800B3474 000B0274*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*800B3478 000B0278*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*800B347C 000B027C*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800B3480 000B0280*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800B3484 000B0284*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800B3488 000B0288*/ PPC::Runtime::ASM::bge(.L_800B3490);
/*800B348C 000B028C*/ PPC::Runtime::ASM::fneg(context->f1, context->f1);
RUNTIME_PPC_JUMP_LABEL(.L_800B3490, 0x800B3490) //this is a jump label
/*800B3490 000B0290*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r31));
/*800B3494 000B0294*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF1E8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800B3498 000B0298*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f0);
/*800B349C 000B029C*/ PPC::Runtime::ASM::bge(.L_800B34A4);
/*800B34A0 000B02A0*/ PPC::Runtime::ASM::fneg(context->f2, context->f2);
RUNTIME_PPC_JUMP_LABEL(.L_800B34A4, 0x800B34A4) //this is a jump label
/*800B34A4 000B02A4*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*800B34A8 000B02A8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF1E8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800B34AC 000B02AC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*800B34B0 000B02B0*/ PPC::Runtime::ASM::bge(.L_800B34B8);
/*800B34B4 000B02B4*/ PPC::Runtime::ASM::fneg(context->f3, context->f3);
RUNTIME_PPC_JUMP_LABEL(.L_800B34B8, 0x800B34B8) //this is a jump label
/*800B34B8 000B02B8*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f1);
/*800B34BC 000B02BC*/ PPC::Runtime::ASM::ble(.L_800B34DC);
/*800B34C0 000B02C0*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f3);
/*800B34C4 000B02C4*/ PPC::Runtime::ASM::ble(.L_800B34DC);
/*800B34C8 000B02C8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DF228 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800B34CC 000B02CC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800B34D0 000B02D0*/ PPC::Runtime::ASM::fmadds(context->f0, context->f1, context->f31, context->f0);
/*800B34D4 000B02D4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800B34D8 000B02D8*/ PPC::Runtime::ASM::b(.L_800B34EC);
RUNTIME_PPC_JUMP_LABEL(.L_800B34DC, 0x800B34DC) //this is a jump label
/*800B34DC 000B02DC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DF228 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800B34E0 000B02E0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800B34E4 000B02E4*/ PPC::Runtime::ASM::fmadds(context->f0, context->f1, context->f31, context->f0);
/*800B34E8 000B02E8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_800B34EC, 0x800B34EC) //this is a jump label
/*800B34EC 000B02EC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800B34F0 000B02F0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*800B34F4 000B02F4*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800B34F8 000B02F8*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*800B34FC 000B02FC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*800B3500 000B0300*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800B3504 000B0304*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*800B3508 000B0308*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*800B350C 000B030C*/ PPC::Runtime::ASM::bl(fn_800B31D4);
/*800B3510 000B0310*/ PPC::Runtime::ASM::b(.L_800B3520);
RUNTIME_PPC_JUMP_LABEL(.L_800B3514, 0x800B3514) //this is a jump label
/*800B3514 000B0314*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*800B3518 000B0318*/ PPC::Runtime::ASM::b(.L_800B3520);
RUNTIME_PPC_JUMP_LABEL(.L_800B351C, 0x800B351C) //this is a jump label
/*800B351C 000B031C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800B3520, 0x800B3520) //this is a jump label
/*800B3520 000B0320*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*800B3524 000B0324*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*800B3528 000B0328*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*800B352C 000B032C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*800B3530 000B0330*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*800B3534 000B0334*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800B3538 000B0338*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x50);
/*800B353C 000B033C*/ PPC::Runtime::ASM::blr();
}