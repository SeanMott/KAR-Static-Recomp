//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80223120.hpp"
#include "fn_8018D284.hpp"



void fn_800F8658(PPC::Runtime::GCContext* context)
{
/*800F8658 000F5458*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800F865C 000F545C*/ PPC::Runtime::ASM::mflr(context->r0);
/*800F8660 000F5460*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800F8664 000F5464*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800F8668 000F5468*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800F866C 000F546C*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*800F8670 000F5470*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DE334 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800F8674 000F5474*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r4));
/*800F8678 000F5478*/ PPC::Runtime::ASM::b(.L_800F8694);
RUNTIME_PPC_JUMP_LABEL(.L_800F867C, 0x800F867C) //this is a jump label
/*800F867C 000F547C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800F8680 000F5480*/ PPC::Runtime::ASM::bl(fn_80223120);
/*800F8684 000F5484*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*800F8688 000F5488*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xec, context->r30));
/*800F868C 000F548C*/ PPC::Runtime::ASM::bl(fn_8018D284);
/*800F8690 000F5490*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_800F8694, 0x800F8694) //this is a jump label
/*800F8694 000F5494*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*800F8698 000F5498*/ PPC::Runtime::ASM::bne(.L_800F867C);
/*800F869C 000F549C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800F86A0 000F54A0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800F86A4 000F54A4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800F86A8 000F54A8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800F86AC 000F54AC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800F86B0 000F54B0*/ PPC::Runtime::ASM::blr();
}