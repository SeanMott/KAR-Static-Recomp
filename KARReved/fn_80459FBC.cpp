//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_OSLockMutex.hpp"
#include "fn_8045BCA4.hpp"
#include "fn_8045BDC4.hpp"
#include "fn_8045BCA4.hpp"
#include "fn_OSUnlockMutex.hpp"
#include "fn_8045BFAC.hpp"



void fn_80459FBC(PPC::Runtime::GCContext* context)
{
/*80459FBC 00456DBC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80459FC0 00456DC0*/ PPC::Runtime::ASM::mflr(context->r0);
/*80459FC4 00456DC4*/ PPC::Runtime::ASM::lis(context->r5, STRUCT_BYTE4_COUNT_18059A880 @ Get_MemoryOffset_HighBit);
/*80459FC8 00456DC8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80459FCC 00456DCC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80459FD0 00456DD0*/ PPC::Runtime::ASM::addi(context->r31, context->r5, STRUCT_BYTE4_COUNT_18059A880 @ Get_MemoryOffset_LowBit);
/*80459FD4 00456DD4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80459FD8 00456DD8*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80459FDC 00456DDC*/ PPC::Runtime::ASM::mr(context->r29, context->r4);
/*80459FE0 00456DE0*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80459FE4 00456DE4*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*80459FE8 00456DE8*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x5b8);
/*80459FEC 00456DEC*/ PPC::Runtime::ASM::bl(fn_OSLockMutex);
/*80459FF0 00456DF0*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_18059A880 @ Get_MemoryOffset_HighBit);
/*80459FF4 00456DF4*/ PPC::Runtime::ASM::addi(context->r4, context->r3, STRUCT_BYTE4_COUNT_18059A880 @ Get_MemoryOffset_LowBit);
/*80459FF8 00456DF8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x508, context->r4));
/*80459FFC 00456DFC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x504, context->r4));
/*8045A000 00456E00*/ PPC::Runtime::ASM::addi(context->r4, context->r3, 0x1);
/*8045A004 00456E04*/ PPC::Runtime::ASM::slwi(context->r3, context->r4, 28);
/*8045A008 00456E08*/ PPC::Runtime::ASM::srwi(context->r4, context->r4, 31);
/*8045A00C 00456E0C*/ PPC::Runtime::ASM::subf(context->r3, context->r4, context->r3);
/*8045A010 00456E10*/ PPC::Runtime::ASM::rotlwi(context->r3, context->r3, 4);
/*8045A014 00456E14*/ PPC::Runtime::ASM::add(context->r30, context->r3, context->r4);
/*8045A018 00456E18*/ PPC::Runtime::ASM::cmpw(context->r0, context->r30);
/*8045A01C 00456E1C*/ PPC::Runtime::ASM::bne(.L_8045A028);
/*8045A020 00456E20*/ PPC::Runtime::ASM::li(context->r28, -0x1);
/*8045A024 00456E24*/ PPC::Runtime::ASM::b(.L_8045A0DC);
RUNTIME_PPC_JUMP_LABEL(.L_8045A028, 0x8045A028) //this is a jump label
/*8045A028 00456E28*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x508, context->r31));
/*8045A02C 00456E2C*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*8045A030 00456E30*/ PPC::Runtime::ASM::li(context->r7, 0x3);
/*8045A034 00456E34*/ PPC::Runtime::ASM::li(context->r6, 0xb);
/*8045A038 00456E38*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x50);
/*8045A03C 00456E3C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8045A040 00456E40*/ PPC::Runtime::ASM::li(context->r5, 0x20);
/*8045A044 00456E44*/ PPC::Runtime::ASM::add(context->r3, context->r31, context->r0);
/*8045A048 00456E48*/ PPC::Runtime::ASM::stw(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8045A04C 00456E4C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x508, context->r31));
/*8045A050 00456E50*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x50);
/*8045A054 00456E54*/ PPC::Runtime::ASM::add(context->r3, context->r31, context->r0);
/*8045A058 00456E58*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8045A05C 00456E5C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x508, context->r31));
/*8045A060 00456E60*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x50);
/*8045A064 00456E64*/ PPC::Runtime::ASM::add(context->r3, context->r31, context->r0);
/*8045A068 00456E68*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*8045A06C 00456E6C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x508, context->r31));
/*8045A070 00456E70*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x50);
/*8045A074 00456E74*/ PPC::Runtime::ASM::add(context->r3, context->r31, context->r0);
/*8045A078 00456E78*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*8045A07C 00456E7C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x508, context->r31));
/*8045A080 00456E80*/ PPC::Runtime::ASM::mulli(context->r3, context->r0, 0x50);
/*8045A084 00456E84*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x14);
/*8045A088 00456E88*/ PPC::Runtime::ASM::add(context->r3, context->r31, context->r3);
/*8045A08C 00456E8C*/ PPC::Runtime::ASM::bl(fn_8045BCA4);
/*8045A090 00456E90*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*8045A094 00456E94*/ PPC::Runtime::ASM::beq(.L_8045A0B0);
/*8045A098 00456E98*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x508, context->r31));
/*8045A09C 00456E9C*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*8045A0A0 00456EA0*/ PPC::Runtime::ASM::mulli(context->r3, context->r0, 0x50);
/*8045A0A4 00456EA4*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x14);
/*8045A0A8 00456EA8*/ PPC::Runtime::ASM::add(context->r3, context->r31, context->r3);
/*8045A0AC 00456EAC*/ PPC::Runtime::ASM::bl(fn_8045BDC4);
RUNTIME_PPC_JUMP_LABEL(.L_8045A0B0, 0x8045A0B0) //this is a jump label
/*8045A0B0 00456EB0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x508, context->r31));
/*8045A0B4 00456EB4*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8045A0B8 00456EB8*/ PPC::Runtime::ASM::li(context->r5, 0x20);
/*8045A0BC 00456EBC*/ PPC::Runtime::ASM::mulli(context->r3, context->r0, 0x50);
/*8045A0C0 00456EC0*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x34);
/*8045A0C4 00456EC4*/ PPC::Runtime::ASM::add(context->r3, context->r31, context->r3);
/*8045A0C8 00456EC8*/ PPC::Runtime::ASM::bl(fn_8045BCA4);
/*8045A0CC 00456ECC*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x508, context->r31));
/*8045A0D0 00456ED0*/ PPC::Runtime::ASM::li(context->r0, 0xb);
/*8045A0D4 00456ED4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x598, context->r31));
/*8045A0D8 00456ED8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x508, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8045A0DC, 0x8045A0DC) //this is a jump label
/*8045A0DC 00456EDC*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x5b8);
/*8045A0E0 00456EE0*/ PPC::Runtime::ASM::bl(fn_OSUnlockMutex);
/*8045A0E4 00456EE4*/ PPC::Runtime::ASM::bl(fn_8045BFAC);
/*8045A0E8 00456EE8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8045A0EC 00456EEC*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8045A0F0 00456EF0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8045A0F4 00456EF4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8045A0F8 00456EF8*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8045A0FC 00456EFC*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8045A100 00456F00*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8045A104 00456F04*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8045A108 00456F08*/ PPC::Runtime::ASM::blr();
}