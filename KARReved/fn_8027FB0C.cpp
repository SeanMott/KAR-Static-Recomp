//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8027FA2C.hpp"
#include "fn_8027FA2C.hpp"



void fn_8027FB0C(PPC::Runtime::GCContext* context)
{
/*8027FB0C 0027C90C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8027FB10 0027C910*/ PPC::Runtime::ASM::mflr(context->r0);
/*8027FB14 0027C914*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8027FB18 0027C918*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8027FB1C 0027C91C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8027FB20 0027C920*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8027FB24 0027C924*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8027FB28 0027C928*/ PPC::Runtime::ASM::bne(.L_8027FBAC);
/*8027FB2C 0027C92C*/ PPC::Runtime::ASM::li(context->r3, 0x3);
/*8027FB30 0027C930*/ PPC::Runtime::ASM::li(context->r4, 0x11);
/*8027FB34 0027C934*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8027FB38 0027C938*/ PPC::Runtime::ASM::bl(fn_GObj_Create);
/*8027FB3C 0027C93C*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BA590 @ Get_MemoryOffset_HighBit);
/*8027FB40 0027C940*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8027FB44 0027C944*/ PPC::Runtime::ASM::addi(context->r3, context->r4, lbl_804BA590 @ Get_MemoryOffset_LowBit);
/*8027FB48 0027C948*/ PPC::Runtime::ASM::bl(fn_HSD_CObjLoadDesc);
/*8027FB4C 0027C94C*/ PPC::Runtime::ASM::mr(context->r0, context->r3);
/*8027FB50 0027C950*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8027FB54 0027C954*/ PPC::Runtime::ASM::lbz(context->r4, SkipAddress_28 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8027FB58 0027C958*/ PPC::Runtime::ASM::mr(context->r5, context->r0);
/*8027FB5C 0027C95C*/ PPC::Runtime::ASM::bl(fn_GObj_AddObject);
/*8027FB60 0027C960*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8027FB64 0027C964*/ PPC::Runtime::ASM::bl(fn_JObj_LoadJoint);
/*8027FB68 0027C968*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8027FB6C 0027C96C*/ PPC::Runtime::ASM::lis(context->r3, fn_8042A29C @ Get_MemoryOffset_HighBit);
/*8027FB70 0027C970*/ PPC::Runtime::ASM::addi(context->r4, context->r3, fn_8042A29C @ Get_MemoryOffset_LowBit);
/*8027FB74 0027C974*/ PPC::Runtime::ASM::li(context->r5, 0x5);
/*8027FB78 0027C978*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8027FB7C 0027C97C*/ PPC::Runtime::ASM::bl(fn_80429728);
/*8027FB80 0027C980*/ PPC::Runtime::ASM::lis(context->r3, 0x20);
/*8027FB84 0027C984*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8027FB88 0027C988*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x2000);
/*8027FB8C 0027C98C*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*8027FB90 0027C990*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r6));
/*8027FB94 0027C994*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8027FB98 0027C998*/ PPC::Runtime::ASM::lis(context->r3, fn_8027FA2C @ Get_MemoryOffset_HighBit);
/*8027FB9C 0027C99C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r6));
/*8027FBA0 0027C9A0*/ PPC::Runtime::ASM::addi(context->r4, context->r3, fn_8027FA2C @ Get_MemoryOffset_LowBit);
/*8027FBA4 0027C9A4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8027FBA8 0027C9A8*/ PPC::Runtime::ASM::bl(fn_804288A4);
RUNTIME_PPC_JUMP_LABEL(.L_8027FBAC, 0x8027FBAC) //this is a jump label
/*8027FBAC 0027C9AC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8027FBB0 0027C9B0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8027FBB4 0027C9B4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8027FBB8 0027C9B8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8027FBBC 0027C9BC*/ PPC::Runtime::ASM::blr();
}