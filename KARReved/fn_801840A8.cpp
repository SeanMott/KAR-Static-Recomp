//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_801840A8(PPC::Runtime::GCContext* context)
{
/*801840A8 00180EA8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801840AC 00180EAC*/ PPC::Runtime::ASM::mflr(context->r0);
/*801840B0 00180EB0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801840B4 00180EB4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801840B8 00180EB8*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*801840BC 00180EBC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1168, context->r3));
/*801840C0 00180EC0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*801840C4 00180EC4*/ PPC::Runtime::ASM::beq(.L_801840E0);
/*801840C8 00180EC8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*801840CC 00180ECC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0E8C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801840D0 00180ED0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*801840D4 00180ED4*/ PPC::Runtime::ASM::bl(fn_HSD_JObjReqAnim);
/*801840D8 00180ED8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*801840DC 00180EDC*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAnimAll?);
RUNTIME_PPC_JUMP_LABEL(.L_801840E0, 0x801840E0) //this is a jump label
/*801840E0 00180EE0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801840E4 00180EE4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801840E8 00180EE8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801840EC 00180EEC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801840F0 00180EF0*/ PPC::Runtime::ASM::blr();
}