//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_802FCDB0(PPC::Runtime::GCContext* context)
{
/*802FCDB0 002F9BB0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802FCDB4 002F9BB4*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*802FCDB8 002F9BB8*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805E3B08 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802FCDBC 002F9BBC*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*802FCDC0 002F9BC0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802FCDC4 002F9BC4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r5));
/*802FCDC8 002F9BC8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r3));
/*802FCDCC 002F9BCC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802FCDD0 002F9BD0*/ PPC::Runtime::ASM::lfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802FCDD4 002F9BD4*/ PPC::Runtime::ASM::fsubs(context->f1, context->f1, context->f2);
/*802FCDD8 002F9BD8*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*802FCDDC 002F9BDC*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*802FCDE0 002F9BE0*/ PPC::Runtime::ASM::bne(.L_802FCE00);
/*802FCDE4 002F9BE4*/ PPC::Runtime::ASM::lhz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3a, context->r3));
/*802FCDE8 002F9BE8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*802FCDEC 002F9BEC*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r5));
/*802FCDF0 002F9BF0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*802FCDF4 002F9BF4*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*802FCDF8 002F9BF8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r4));
/*802FCDFC 002F9BFC*/ PPC::Runtime::ASM::b(.L_802FCE04);
RUNTIME_PPC_JUMP_LABEL(.L_802FCE00, 0x802FCE00) //this is a jump label
/*802FCE00 002F9C00*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_802FCE04, 0x802FCE04) //this is a jump label
/*802FCE04 002F9C04*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802FCE08 002F9C08*/ PPC::Runtime::ASM::blr();
}