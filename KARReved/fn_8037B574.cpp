//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8037B574(PPC::Runtime::GCContext* context)
{
/*8037B574 00378374*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8037B578 00378378*/ PPC::Runtime::ASM::mflr(context->r0);
/*8037B57C 0037837C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8037B580 00378380*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8037B584 00378384*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*8037B588 00378388*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8037B58C 0037838C*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8037B590 00378390*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r3));
/*8037B594 00378394*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r3));
/*8037B598 00378398*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*8037B59C 0037839C*/ PPC::Runtime::ASM::beq(.L_8037B5BC);
/*8037B5A0 003783A0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8037B5A4 003783A4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r4));
/*8037B5A8 003783A8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8037B5AC 003783AC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r4));
/*8037B5B0 003783B0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8037B5B4 003783B4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r4));
/*8037B5B8 003783B8*/ PPC::Runtime::ASM::b(.L_8037B5F8);
RUNTIME_PPC_JUMP_LABEL(.L_8037B5BC, 0x8037B5BC) //this is a jump label
/*8037B5BC 003783BC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8037B5C0 003783C0*/ PPC::Runtime::ASM::bl(fn_80437CD8);
/*8037B5C4 003783C4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8037B5C8 003783C8*/ PPC::Runtime::ASM::beq(.L_8037B5F0);
/*8037B5CC 003783CC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r30));
/*8037B5D0 003783D0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8037B5D4 003783D4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r3));
/*8037B5D8 003783D8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r3));
/*8037B5DC 003783DC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8037B5E0 003783E0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*8037B5E4 003783E4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8037B5E8 003783E8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8037B5EC 003783EC*/ PPC::Runtime::ASM::b(.L_8037B5F8);
RUNTIME_PPC_JUMP_LABEL(.L_8037B5F0, 0x8037B5F0) //this is a jump label
/*8037B5F0 003783F0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8037B5F4 003783F4*/ PPC::Runtime::ASM::b(.L_8037B5FC);
RUNTIME_PPC_JUMP_LABEL(.L_8037B5F8, 0x8037B5F8) //this is a jump label
/*8037B5F8 003783F8*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8037B5FC, 0x8037B5FC) //this is a jump label
/*8037B5FC 003783FC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8037B600 00378400*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8037B604 00378404*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8037B608 00378408*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8037B60C 0037840C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8037B610 00378410*/ PPC::Runtime::ASM::blr();
}