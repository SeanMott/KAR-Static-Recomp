//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_80285130.hpp"



void fn_802A6AA0(PPC::Runtime::GCContext* context)
{
/*802A6AA0 002A38A0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802A6AA4 002A38A4*/ PPC::Runtime::ASM::mflr(context->r0);
/*802A6AA8 002A38A8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802A6AAC 002A38AC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802A6AB0 002A38B0*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*802A6AB4 002A38B4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/* 802A6AB8 002A38B8  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*802A6ABC 002A38BC*/ PPC::Runtime::ASM::beq(.L_802A6BB8);
/*802A6AC0 002A38C0*/ PPC::Runtime::ASM::lis(context->r4, lbl_804C2E84 @ Get_MemoryOffset_HighBit);
/*802A6AC4 002A38C4*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x10e8);
/*802A6AC8 002A38C8*/ PPC::Runtime::ASM::addi(context->r6, context->r4, lbl_804C2E84 @ Get_MemoryOffset_LowBit);
/*802A6ACC 002A38CC*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A6AD0 002A38D0*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802A6AD4 002A38D4*/ PPC::Runtime::ASM::addi(context->r5, context->r6, 0x10);
/*802A6AD8 002A38D8*/ PPC::Runtime::ASM::addi(context->r0, context->r6, 0x58);
/*802A6ADC 002A38DC*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802A6AE0 002A38E0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r30));
/*802A6AE4 002A38E4*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A6AE8 002A38E8*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xfe4);
/*802A6AEC 002A38EC*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A6AF0 002A38F0*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A6AF4 002A38F4*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xee0);
/*802A6AF8 002A38F8*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A6AFC 002A38FC*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A6B00 002A3900*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xddc);
/*802A6B04 002A3904*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A6B08 002A3908*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A6B0C 002A390C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xcd8);
/*802A6B10 002A3910*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A6B14 002A3914*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A6B18 002A3918*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xbd4);
/*802A6B1C 002A391C*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A6B20 002A3920*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A6B24 002A3924*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xad0);
/*802A6B28 002A3928*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A6B2C 002A392C*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A6B30 002A3930*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x9cc);
/*802A6B34 002A3934*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A6B38 002A3938*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A6B3C 002A393C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x8c8);
/*802A6B40 002A3940*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A6B44 002A3944*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A6B48 002A3948*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x7c4);
/*802A6B4C 002A394C*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A6B50 002A3950*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A6B54 002A3954*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x6c0);
/*802A6B58 002A3958*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A6B5C 002A395C*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A6B60 002A3960*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x5bc);
/*802A6B64 002A3964*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A6B68 002A3968*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A6B6C 002A396C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x4b8);
/*802A6B70 002A3970*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A6B74 002A3974*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A6B78 002A3978*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x3b4);
/*802A6B7C 002A397C*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A6B80 002A3980*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A6B84 002A3984*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x2b0);
/*802A6B88 002A3988*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A6B8C 002A398C*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A6B90 002A3990*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x1ac);
/*802A6B94 002A3994*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A6B98 002A3998*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A6B9C 002A399C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802A6BA0 002A39A0*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802A6BA4 002A39A4*/ PPC::Runtime::ASM::bl(fn_80285130);
/*802A6BA8 002A39A8*/ PPC::Runtime::ASM::extsh.(context->r0, context->r31);
/*802A6BAC 002A39AC*/ PPC::Runtime::ASM::ble(.L_802A6BB8);
/*802A6BB0 002A39B0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802A6BB4 002A39B4*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_802A6BB8, 0x802A6BB8) //this is a jump label
/*802A6BB8 002A39B8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802A6BBC 002A39BC*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802A6BC0 002A39C0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802A6BC4 002A39C4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802A6BC8 002A39C8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802A6BCC 002A39CC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802A6BD0 002A39D0*/ PPC::Runtime::ASM::blr();
}