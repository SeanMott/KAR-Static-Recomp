//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_80285130.hpp"



void fn_802A9434(PPC::Runtime::GCContext* context)
{
/*802A9434 002A6234*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802A9438 002A6238*/ PPC::Runtime::ASM::mflr(context->r0);
/*802A943C 002A623C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802A9440 002A6240*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802A9444 002A6244*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*802A9448 002A6248*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/* 802A944C 002A624C  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*802A9450 002A6250*/ PPC::Runtime::ASM::beq(.L_802A94B0);
/*802A9454 002A6254*/ PPC::Runtime::ASM::lis(context->r4, lbl_804C1CA8 @ Get_MemoryOffset_HighBit);
/*802A9458 002A6258*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x3b4);
/*802A945C 002A625C*/ PPC::Runtime::ASM::addi(context->r6, context->r4, lbl_804C1CA8 @ Get_MemoryOffset_LowBit);
/*802A9460 002A6260*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A9464 002A6264*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802A9468 002A6268*/ PPC::Runtime::ASM::addi(context->r5, context->r6, 0x10);
/*802A946C 002A626C*/ PPC::Runtime::ASM::addi(context->r0, context->r6, 0x58);
/*802A9470 002A6270*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802A9474 002A6274*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r30));
/*802A9478 002A6278*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A947C 002A627C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x2b0);
/*802A9480 002A6280*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A9484 002A6284*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A9488 002A6288*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x1ac);
/*802A948C 002A628C*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A9490 002A6290*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A9494 002A6294*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802A9498 002A6298*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802A949C 002A629C*/ PPC::Runtime::ASM::bl(fn_80285130);
/*802A94A0 002A62A0*/ PPC::Runtime::ASM::extsh.(context->r0, context->r31);
/*802A94A4 002A62A4*/ PPC::Runtime::ASM::ble(.L_802A94B0);
/*802A94A8 002A62A8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802A94AC 002A62AC*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_802A94B0, 0x802A94B0) //this is a jump label
/*802A94B0 002A62B0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802A94B4 002A62B4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802A94B8 002A62B8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802A94BC 002A62BC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802A94C0 002A62C0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802A94C4 002A62C4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802A94C8 002A62C8*/ PPC::Runtime::ASM::blr();
}