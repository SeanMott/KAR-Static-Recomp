//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80245F70.hpp"
#include "fn_802460D4.hpp"
#include "fn_8024625C.hpp"
#include "fn_800D1838.hpp"
#include "fn_800D1860.hpp"



void fn_80206A7C(PPC::Runtime::GCContext* context)
{
/*80206A7C 0020387C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80206A80 00203880*/ PPC::Runtime::ASM::mflr(context->r0);
/*80206A84 00203884*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2318 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80206A88 00203888*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80206A8C 0020388C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80206A90 00203890*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E231C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80206A94 00203894*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80206A98 00203898*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*80206A9C 0020389C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80206AA0 002038A0*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80206AA4 002038A4*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x2f8);
/*80206AA8 002038A8*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80206AAC 002038AC*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x334);
/*80206AB0 002038B0*/ PPC::Runtime::ASM::addi(context->r6, context->r30, 0x340);
/*80206AB4 002038B4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x594, context->r3));
/*80206AB8 002038B8*/ PPC::Runtime::ASM::bl(fn_80245F70);
/*80206ABC 002038BC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x594, context->r30));
/*80206AC0 002038C0*/ PPC::Runtime::ASM::bl(fn_802460D4);
/*80206AC4 002038C4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x594, context->r30));
/*80206AC8 002038C8*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x2f8);
/*80206ACC 002038CC*/ PPC::Runtime::ASM::bl(fn_8024625C);
/*80206AD0 002038D0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb09, context->r30));
/*80206AD4 002038D4*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80206AD8 002038D8*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 2, 29, 29);
/*80206ADC 002038DC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb09, context->r30));
/*80206AE0 002038E0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x594, context->r30));
/*80206AE4 002038E4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r3));
/*80206AE8 002038E8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x144, context->r3));
/*80206AEC 002038EC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80206AF0 002038F0*/ PPC::Runtime::ASM::beq(.L_80206B50);
/*80206AF4 002038F4*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11c, context->r3));
/*80206AF8 002038F8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r29));
/* 80206AFC 002038FC  54 00 07 FF */ clrlwi. context->r0 , context->r0 , 31
/*80206B00 00203900*/ PPC::Runtime::ASM::bne(.L_80206B18);
/*80206B04 00203904*/ PPC::Runtime::ASM::lis(context->r4, MemoryOffset_1337 @ Get_MemoryOffset_HighBit);
/*80206B08 00203908*/ PPC::Runtime::ASM::li(context->r3, String_ "mplib." 6 @ Get_MemoryOffset_SDA21);
/*80206B0C 0020390C*/ PPC::Runtime::ASM::addi(context->r5, context->r4, MemoryOffset_1337 @ Get_MemoryOffset_LowBit);
/*80206B10 00203910*/ PPC::Runtime::ASM::li(context->r4, 0x94);
/*80206B14 00203914*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80206B18, 0x80206B18) //this is a jump label
/*80206B18 00203918*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*80206B1C 0020391C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80206B20 00203920*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x59c, context->r30));
/*80206B24 00203924*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x59c, context->r30));
/*80206B28 00203928*/ PPC::Runtime::ASM::bl(fn_800D1838);
/*80206B2C 0020392C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80206B30 00203930*/ PPC::Runtime::ASM::bne(.L_80206B50);
/*80206B34 00203934*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x59c, context->r30));
/*80206B38 00203938*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x5b8);
/*80206B3C 0020393C*/ PPC::Runtime::ASM::bl(fn_800D1860);
/*80206B40 00203940*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb09, context->r30));
/*80206B44 00203944*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*80206B48 00203948*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 2, 29, 29);
/*80206B4C 0020394C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb09, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_80206B50, 0x80206B50) //this is a jump label
/*80206B50 00203950*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb09, context->r30));
/* 80206B54 00203954  54 00 F7 FF */ extrwi. context->r0 , context->r0 , 1 , 29
/*80206B58 00203958*/ PPC::Runtime::ASM::bne(.L_80206B7C);
/*80206B5C 0020395C*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*80206B60 00203960*/ PPC::Runtime::ASM::beq(.L_80206B7C);
/*80206B64 00203964*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*80206B68 00203968*/ PPC::Runtime::ASM::mr(context->r12, context->r31);
/*80206B6C 0020396C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80206B70 00203970*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x908, context->r30));
/*80206B74 00203974*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80206B78 00203978*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_80206B7C, 0x80206B7C) //this is a jump label
/*80206B7C 0020397C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80206B80 00203980*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80206B84 00203984*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80206B88 00203988*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80206B8C 0020398C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80206B90 00203990*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80206B94 00203994*/ PPC::Runtime::ASM::blr();
}