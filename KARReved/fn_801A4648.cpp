//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801A2818.hpp"
#include "fn_801A25B8.hpp"
#include "fn_801A29F8.hpp"



void fn_801A4648(PPC::Runtime::GCContext* context)
{
/*801A4648 001A1448*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801A464C 001A144C*/ PPC::Runtime::ASM::mflr(context->r0);
/*801A4650 001A1450*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801A4654 001A1454*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801A4658 001A1458*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801A465C 001A145C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2cc, context->r3));
/*801A4660 001A1460*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*801A4664 001A1464*/ PPC::Runtime::ASM::bne(.L_801A4670);
/*801A4668 001A1468*/ PPC::Runtime::ASM::bl(fn_801A2818);
/*801A466C 001A146C*/ PPC::Runtime::ASM::b(.L_801A4680);
RUNTIME_PPC_JUMP_LABEL(.L_801A4670, 0x801A4670) //this is a jump label
/*801A4670 001A1470*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x384, context->r31));
/*801A4674 001A1474*/ PPC::Runtime::ASM::bl(fn_801A25B8);
/*801A4678 001A1478*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801A467C 001A147C*/ PPC::Runtime::ASM::bl(fn_801A29F8);
RUNTIME_PPC_JUMP_LABEL(.L_801A4680, 0x801A4680) //this is a jump label
/*801A4680 001A1480*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801A4684 001A1484*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801A4688 001A1488*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801A468C 001A148C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801A4690 001A1490*/ PPC::Runtime::ASM::blr();
}