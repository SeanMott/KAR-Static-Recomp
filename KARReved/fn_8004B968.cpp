//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8003D5F0.hpp"
#include "fn_gmGetClearcheckerType0Ptr.hpp"
#include "fn_plGetPlayerKind.hpp"
#include "fn_8022EA98.hpp"



void fn_8004B968(PPC::Runtime::GCContext* context)
{
/*8004B968 00048768*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8004B96C 0004876C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8004B970 00048770*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8004B974 00048774*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8004B978 00048778*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8004B97C 0004877C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8004B980 00048780*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8004B984 00048784*/ PPC::Runtime::ASM::bl(fn_8003D5F0);
/*8004B988 00048788*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8004B98C 0004878C*/ PPC::Runtime::ASM::bl(fn_gmGetClearcheckerType0Ptr);
/*8004B990 00048790*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8004B994 00048794*/ PPC::Runtime::ASM::extsb(context->r31, context->r31);
/*8004B998 00048798*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*8004B99C 0004879C*/ PPC::Runtime::ASM::li(context->r28, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8004B9A0, 0x8004B9A0) //this is a jump label
/*8004B9A0 000487A0*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8004B9A4 000487A4*/ PPC::Runtime::ASM::bl(fn_plGetPlayerKind);
/*8004B9A8 000487A8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8004B9AC 000487AC*/ PPC::Runtime::ASM::beq(.L_8004B9C0);
/*8004B9B0 000487B0*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x1);
/*8004B9B4 000487B4*/ PPC::Runtime::ASM::bne(.L_8004B9D0);
/*8004B9B8 000487B8*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x1);
/*8004B9BC 000487BC*/ PPC::Runtime::ASM::bne(.L_8004B9D0);
RUNTIME_PPC_JUMP_LABEL(.L_8004B9C0, 0x8004B9C0) //this is a jump label
/*8004B9C0 000487C0*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8004B9C4 000487C4*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*8004B9C8 000487C8*/ PPC::Runtime::ASM::bl(fn_8022EA98);
/*8004B9CC 000487CC*/ PPC::Runtime::ASM::add(context->r29, context->r29, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_8004B9D0, 0x8004B9D0) //this is a jump label
/*8004B9D0 000487D0*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x1);
/*8004B9D4 000487D4*/ PPC::Runtime::ASM::cmpwi(context->r28, 0x5);
/*8004B9D8 000487D8*/ PPC::Runtime::ASM::blt(.L_8004B9A0);
/*8004B9DC 000487DC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x110, context->r30));
/*8004B9E0 000487E0*/ PPC::Runtime::ASM::add(context->r29, context->r29, context->r0);
/*8004B9E4 000487E4*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8004B9E8 000487E8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8004B9EC 000487EC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8004B9F0 000487F0*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8004B9F4 000487F4*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8004B9F8 000487F8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8004B9FC 000487FC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8004BA00 00048800*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8004BA04 00048804*/ PPC::Runtime::ASM::blr();
}