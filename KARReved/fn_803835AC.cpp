//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_803835AC(PPC::Runtime::GCContext* context)
{
/*803835AC 003803AC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*803835B0 003803B0*/ PPC::Runtime::ASM::mflr(context->r0);
/*803835B4 003803B4*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F43D0 @ Get_MemoryOffset_HighBit);
/*803835B8 003803B8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803835BC 003803BC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803835C0 003803C0*/ PPC::Runtime::ASM::addi(context->r31, context->r3, lbl_804F43D0 @ Get_MemoryOffset_LowBit);
/*803835C4 003803C4*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x30);
/*803835C8 003803C8*/ PPC::Runtime::ASM::bl(fn_HSD_JObjSetDefaultClass?);
/*803835CC 003803CC*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0xd8);
/*803835D0 003803D0*/ PPC::Runtime::ASM::bl(fn_803F476C);
/*803835D4 003803D4*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x84);
/*803835D8 003803D8*/ PPC::Runtime::ASM::bl(fn_803F9FA4);
/*803835DC 003803DC*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x120);
/*803835E0 003803E0*/ PPC::Runtime::ASM::bl(fn_HSD_PObjSetDefaultClass);
/*803835E4 003803E4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803835E8 003803E8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803835EC 003803EC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803835F0 003803F0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*803835F4 003803F4*/ PPC::Runtime::ASM::blr();
}