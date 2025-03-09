//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_HSD_AObjRemove.hpp"
#include "fn_hsdFreeMemPiece.hpp"
#include "fn_HSD_TObjRemoveAll.hpp"
#include "fn_HSD_TExpFreeTevDesc.hpp"
#include "fn_HSD_TExpFreeList.hpp"
#include "fn_hsdFreeMemPiece.hpp"



void fn_MObjRelease(PPC::Runtime::GCContext* context)
{
/*803FAF8C 003F7D8C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*803FAF90 003F7D90*/ PPC::Runtime::ASM::mflr(context->r0);
/*803FAF94 003F7D94*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803FAF98 003F7D98*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803FAF9C 003F7D9C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*803FAFA0 003F7DA0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*803FAFA4 003F7DA4*/ PPC::Runtime::ASM::bl(fn_HSD_AObjRemove);
/*803FAFA8 003F7DA8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*803FAFAC 003F7DAC*/ PPC::Runtime::ASM::li(context->r4, 0x14);
/*803FAFB0 003F7DB0*/ PPC::Runtime::ASM::bl(fn_hsdFreeMemPiece);
/*803FAFB4 003F7DB4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*803FAFB8 003F7DB8*/ PPC::Runtime::ASM::bl(fn_HSD_TObjRemoveAll);
/*803FAFBC 003F7DBC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*803FAFC0 003F7DC0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803FAFC4 003F7DC4*/ PPC::Runtime::ASM::beq(.L_803FAFCC);
/*803FAFC8 003F7DC8*/ PPC::Runtime::ASM::bl(fn_HSD_TExpFreeTevDesc);
RUNTIME_PPC_JUMP_LABEL(.L_803FAFCC, 0x803FAFCC) //this is a jump label
/*803FAFCC 003F7DCC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r31));
/*803FAFD0 003F7DD0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803FAFD4 003F7DD4*/ PPC::Runtime::ASM::beq(.L_803FAFE4);
/*803FAFD8 003F7DD8*/ PPC::Runtime::ASM::li(context->r4, 0x7);
/*803FAFDC 003F7DDC*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*803FAFE0 003F7DE0*/ PPC::Runtime::ASM::bl(fn_HSD_TExpFreeList);
RUNTIME_PPC_JUMP_LABEL(.L_803FAFE4, 0x803FAFE4) //this is a jump label
/*803FAFE4 003F7DE4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*803FAFE8 003F7DE8*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803FAFEC 003F7DEC*/ PPC::Runtime::ASM::beq(.L_803FAFF8);
/*803FAFF0 003F7DF0*/ PPC::Runtime::ASM::li(context->r4, 0xc);
/*803FAFF4 003F7DF4*/ PPC::Runtime::ASM::bl(fn_hsdFreeMemPiece);
RUNTIME_PPC_JUMP_LABEL(.L_803FAFF8, 0x803FAFF8) //this is a jump label
/*803FAFF8 003F7DF8*/ PPC::Runtime::ASM::lis(context->r4, lbl_80502AC0 @ Get_MemoryOffset_HighBit);
/*803FAFFC 003F7DFC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*803FB000 003F7E00*/ PPC::Runtime::ASM::addi(context->r4, context->r4, lbl_80502AC0 @ Get_MemoryOffset_LowBit);
/*803FB004 003F7E04*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r4));
/*803FB008 003F7E08*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r4));
/*803FB00C 003F7E0C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FB010 003F7E10*/ PPC::Runtime::ASM::bctrl();
/*803FB014 003F7E14*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803FB018 003F7E18*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803FB01C 003F7E1C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803FB020 003F7E20*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*803FB024 003F7E24*/ PPC::Runtime::ASM::blr();
}