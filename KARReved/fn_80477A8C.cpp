//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "__OSGetSystemTime.hpp"
#include "fn___div2i.hpp"
#include "fn_TCPCancelRxmitTimer.hpp"
#include "memmove.hpp"
#include "memmove.hpp"
#include "fn_80472738.hpp"
#include "fn_80475738.hpp"



void fn_80477A8C(PPC::Runtime::GCContext* context)
{
/*80477A8C 0047488C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80477A90 00474890*/ PPC::Runtime::ASM::lis(context->r5, 0x8000);
/*80477A94 00474894*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*80477A98 00474898*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*80477A9C 0047489C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*80477AA0 004748A0*/ PPC::Runtime::ASM::addi(context->r31, context->r4, 0x0);
/*80477AA4 004748A4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*80477AA8 004748A8*/ PPC::Runtime::ASM::addi(context->r30, context->r3, 0x0);
/*80477AAC 004748AC*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80477AB0 004748B0*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80477AB4 004748B4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf8, context->r5));
/*80477AB8 004748B8*/ PPC::Runtime::ASM::lis(context->r5, STRUCT_BYTE4_COUNT_1805BDDE0 @ Get_MemoryOffset_HighBit);
/*80477ABC 004748BC*/ PPC::Runtime::ASM::addi(context->r28, context->r5, STRUCT_BYTE4_COUNT_1805BDDE0 @ Get_MemoryOffset_LowBit);
/*80477AC0 004748C0*/ PPC::Runtime::ASM::srwi(context->r29, context->r0, 2);
/*80477AC4 004748C4*/ PPC::Runtime::ASM::bl(__OSGetSystemTime);
/*80477AC8 004748C8*/ PPC::Runtime::ASM::addi(context->r6, context->r29, 0x0);
/*80477ACC 004748CC*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80477AD0 004748D0*/ PPC::Runtime::ASM::bl(fn___div2i);
/*80477AD4 004748D4*/ PPC::Runtime::ASM::addi(context->r29, context->r4, 0x0);
/*80477AD8 004748D8*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x0);
/*80477ADC 004748DC*/ PPC::Runtime::ASM::bl(fn_TCPCancelRxmitTimer);
/*80477AE0 004748E0*/ PPC::Runtime::ASM::addi(context->r5, context->r28, 0xc);
/*80477AE4 004748E4*/ PPC::Runtime::ASM::addi(context->r6, context->r28, 0x10);
/*80477AE8 004748E8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r28));
/*80477AEC 004748EC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r28));
/*80477AF0 004748F0*/ PPC::Runtime::ASM::cmpw(context->r3, context->r0);
/*80477AF4 004748F4*/ PPC::Runtime::ASM::bge(.L_80477B28);
/*80477AF8 004748F8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r28));
/*80477AFC 004748FC*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*80477B00 00474900*/ PPC::Runtime::ASM::mulli(context->r3, context->r3, 0x18);
/*80477B04 00474904*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*80477B08 00474908*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*80477B0C 0047490C*/ PPC::Runtime::ASM::add(context->r28, context->r4, context->r3);
/*80477B10 00474910*/ PPC::Runtime::ASM::cmplw(context->r0, context->r28);
/*80477B14 00474914*/ PPC::Runtime::ASM::bgt(.L_80477B60);
/*80477B18 00474918*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*80477B1C 0047491C*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x18);
/*80477B20 00474920*/ PPC::Runtime::ASM::subf(context->r28, context->r0, context->r28);
/*80477B24 00474924*/ PPC::Runtime::ASM::b(.L_80477B60);
RUNTIME_PPC_JUMP_LABEL(.L_80477B28, 0x80477B28) //this is a jump label
/*80477B28 00474928*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*80477B2C 0047492C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80477B30 00474930*/ PPC::Runtime::ASM::beq(.L_80477B5C);
/*80477B34 00474934*/ PPC::Runtime::ASM::addi(context->r5, context->r28, 0x8);
/*80477B38 00474938*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*80477B3C 0047493C*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r28));
/*80477B40 00474940*/ PPC::Runtime::ASM::addi(context->r4, context->r28, 0x18);
/*80477B44 00474944*/ PPC::Runtime::ASM::cmplw(context->r4, context->r0);
/*80477B48 00474948*/ PPC::Runtime::ASM::bne(.L_80477B50);
/*80477B4C 0047494C*/ PPC::Runtime::ASM::b(.L_80477B54);
RUNTIME_PPC_JUMP_LABEL(.L_80477B50, 0x80477B50) //this is a jump label
/*80477B50 00474950*/ PPC::Runtime::ASM::mr(context->r3, context->r4);
RUNTIME_PPC_JUMP_LABEL(.L_80477B54, 0x80477B54) //this is a jump label
/*80477B54 00474954*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*80477B58 00474958*/ PPC::Runtime::ASM::b(.L_80477B60);
RUNTIME_PPC_JUMP_LABEL(.L_80477B5C, 0x80477B5C) //this is a jump label
/*80477B5C 0047495C*/ PPC::Runtime::ASM::li(context->r28, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80477B60, 0x80477B60) //this is a jump label
/*80477B60 00474960*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*80477B64 00474964*/ PPC::Runtime::ASM::beq(.L_80477BB0);
/*80477B68 00474968*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0x0);
/*80477B6C 0047496C*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x14);
/*80477B70 00474970*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*80477B74 00474974*/ PPC::Runtime::ASM::bl(memmove);
/*80477B78 00474978*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0x4);
/*80477B7C 0047497C*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0xc);
/*80477B80 00474980*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*80477B84 00474984*/ PPC::Runtime::ASM::bl(memmove);
/*80477B88 00474988*/ PPC::Runtime::ASM::lhz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x12, context->r31));
/*80477B8C 0047498C*/ PPC::Runtime::ASM::addi(context->r0, context->r29, 0xf0);
/*80477B90 00474990*/ PPC::Runtime::ASM::sth(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r28));
/*80477B94 00474994*/ PPC::Runtime::ASM::lhz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r31));
/*80477B98 00474998*/ PPC::Runtime::ASM::sth(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r28));
/*80477B9C 0047499C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r31));
/*80477BA0 004749A0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r28));
/*80477BA4 004749A4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r31));
/*80477BA8 004749A8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r28));
/*80477BAC 004749AC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r28));
RUNTIME_PPC_JUMP_LABEL(.L_80477BB0, 0x80477BB0) //this is a jump label
/*80477BB0 004749B0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b0, context->r31));
/*80477BB4 004749B4*/ PPC::Runtime::ASM::lwz(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r31));
/*80477BB8 004749B8*/ PPC::Runtime::ASM::subf.(context->r0, context->r0, context->r9);
/*80477BBC 004749BC*/ PPC::Runtime::ASM::ble(.L_80477BE8);
/*80477BC0 004749C0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80477BC4 004749C4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80477BC8 004749C8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80477BCC 004749CC*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x14);
/*80477BD0 004749D0*/ PPC::Runtime::ASM::lhz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x12, context->r31));
/*80477BD4 004749D4*/ PPC::Runtime::ASM::addi(context->r6, context->r31, 0xc);
/*80477BD8 004749D8*/ PPC::Runtime::ASM::lhz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r31));
/*80477BDC 004749DC*/ PPC::Runtime::ASM::li(context->r10, 0x5010);
/*80477BE0 004749E0*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r31));
/*80477BE4 004749E4*/ PPC::Runtime::ASM::bl(fn_80472738);
RUNTIME_PPC_JUMP_LABEL(.L_80477BE8, 0x80477BE8) //this is a jump label
/*80477BE8 004749E8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80477BEC 004749EC*/ PPC::Runtime::ASM::bl(fn_80475738);
/*80477BF0 004749F0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80477BF4 004749F4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*80477BF8 004749F8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*80477BFC 004749FC*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80477C00 00474A00*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80477C04 00474A04*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*80477C08 00474A08*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80477C0C 00474A0C*/ PPC::Runtime::ASM::blr();
}