//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn___assert.hpp"
#include "fn_HSD_TExpSetupTev.hpp"
#include "fn_HSD_TObjSetup_ParseDatFile_ImageStructureVolatileTev.hpp"



void fn_MObjSetupTev(PPC::Runtime::GCContext* context)
{
/*803FABA0 003F79A0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*803FABA4 003F79A4*/ PPC::Runtime::ASM::mflr(context->r0);
/*803FABA8 003F79A8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803FABAC 003F79AC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803FABB0 003F79B0*/ PPC::Runtime::ASM::mr(context->r31, context->r5);
/*803FABB4 003F79B4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803FABB8 003F79B8*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*803FABBC 003F79BC*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803FABC0 003F79C0*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*803FABC4 003F79C4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3));
/*803FABC8 003F79C8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*803FABCC 003F79CC*/ PPC::Runtime::ASM::bne(.L_803FABE4);
/*803FABD0 003F79D0*/ PPC::Runtime::ASM::lis(context->r4, lbl_80502B70 @ Get_MemoryOffset_HighBit);
/*803FABD4 003F79D4*/ PPC::Runtime::ASM::li(context->r3, MemoryOffset_598 @ Get_MemoryOffset_SDA21);
/*803FABD8 003F79D8*/ PPC::Runtime::ASM::addi(context->r5, context->r4, lbl_80502B70 @ Get_MemoryOffset_LowBit);
/*803FABDC 003F79DC*/ PPC::Runtime::ASM::li(context->r4, 0x31e);
/*803FABE0 003F79E0*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_803FABE4, 0x803FABE4) //this is a jump label
/*803FABE4 003F79E4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r29));
/*803FABE8 003F79E8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r29));
/*803FABEC 003F79EC*/ PPC::Runtime::ASM::bl(fn_HSD_TExpSetupTev);
/*803FABF0 003F79F0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*803FABF4 003F79F4*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*803FABF8 003F79F8*/ PPC::Runtime::ASM::bl(fn_HSD_TObjSetup_ParseDatFile_ImageStructureVolatileTev);
/*803FABFC 003F79FC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803FAC00 003F7A00*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803FAC04 003F7A04*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803FAC08 003F7A08*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803FAC0C 003F7A0C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803FAC10 003F7A10*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*803FAC14 003F7A14*/ PPC::Runtime::ASM::blr();
}