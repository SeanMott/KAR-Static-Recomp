//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_OSPanic.hpp"
#include "fn_OSPanic.hpp"
#include "fn_cbForReadAsync.hpp"
#include "fn_cbForReadAsync.hpp"
#include "fn_DVDReadAbsAsyncPrio.hpp"



void fn_DVDReadAsyncPrio(PPC::Runtime::GCContext* context)
{
/*803C554C 003C234C*/ PPC::Runtime::ASM::mflr(context->r0);
/*803C5550 003C2350*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803C5554 003C2354*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x38, context->r1));
/*803C5558 003C2358*/ PPC::Runtime::ASM::stmw(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/* 803C555C 003C235C  7C DD 33 79 */ mr. context->r29 , context->r6
/*803C5560 003C2360*/ PPC::Runtime::ASM::addi(context->r26, context->r3, 0x0);
/*803C5564 003C2364*/ PPC::Runtime::ASM::addi(context->r27, context->r4, 0x0);
/*803C5568 003C2368*/ PPC::Runtime::ASM::addi(context->r28, context->r5, 0x0);
/*803C556C 003C236C*/ PPC::Runtime::ASM::addi(context->r30, context->r7, 0x0);
/*803C5570 003C2370*/ PPC::Runtime::ASM::addi(context->r31, context->r8, 0x0);
/*803C5574 003C2374*/ PPC::Runtime::ASM::blt(.L_803C5584);
/*803C5578 003C2378*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r26));
/*803C557C 003C237C*/ PPC::Runtime::ASM::cmplw(context->r29, context->r0);
/*803C5580 003C2380*/ PPC::Runtime::ASM::blt(.L_803C559C);
RUNTIME_PPC_JUMP_LABEL(.L_803C5584, 0x803C5584) //this is a jump label
/*803C5584 003C2384*/ PPC::Runtime::ASM::lis(context->r3, String_ "DVDReadAsync()_IsOutOfFil" Get_MemoryOffset_HighBit);
/*803C5588 003C2388*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*803C558C 003C238C*/ PPC::Runtime::ASM::addi(context->r5, context->r3, String_ "DVDReadAsync()_IsOutOfFil" Get_MemoryOffset_LowBit);
/*803C5590 003C2390*/ PPC::Runtime::ASM::li(context->r3, String_ "dvdfs." Get_MemoryOffset_SDA21);
/*803C5594 003C2394*/ PPC::Runtime::ASM::li(context->r4, 0x2e6);
/*803C5598 003C2398*/ PPC::Runtime::ASM::bl(fn_OSPanic);
RUNTIME_PPC_JUMP_LABEL(.L_803C559C, 0x803C559C) //this is a jump label
/*803C559C 003C239C*/ PPC::Runtime::ASM::add.(context->r4, context->r29, context->r28);
/*803C55A0 003C23A0*/ PPC::Runtime::ASM::blt(.L_803C55B4);
/*803C55A4 003C23A4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r26));
/*803C55A8 003C23A8*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x20);
/*803C55AC 003C23AC*/ PPC::Runtime::ASM::cmplw(context->r4, context->r0);
/*803C55B0 003C23B0*/ PPC::Runtime::ASM::blt(.L_803C55CC);
RUNTIME_PPC_JUMP_LABEL(.L_803C55B4, 0x803C55B4) //this is a jump label
/*803C55B4 003C23B4*/ PPC::Runtime::ASM::lis(context->r3, String_ "DVDReadAsync()_IsOutOfFil" Get_MemoryOffset_HighBit);
/*803C55B8 003C23B8*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*803C55BC 003C23BC*/ PPC::Runtime::ASM::addi(context->r5, context->r3, String_ "DVDReadAsync()_IsOutOfFil" Get_MemoryOffset_LowBit);
/*803C55C0 003C23C0*/ PPC::Runtime::ASM::li(context->r3, String_ "dvdfs." Get_MemoryOffset_SDA21);
/*803C55C4 003C23C4*/ PPC::Runtime::ASM::li(context->r4, 0x2ec);
/*803C55C8 003C23C8*/ PPC::Runtime::ASM::bl(fn_OSPanic);
RUNTIME_PPC_JUMP_LABEL(.L_803C55CC, 0x803C55CC) //this is a jump label
/*803C55CC 003C23CC*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r26));
/*803C55D0 003C23D0*/ PPC::Runtime::ASM::lis(context->r3, fn_cbForReadAsync @ Get_MemoryOffset_HighBit);
/*803C55D4 003C23D4*/ PPC::Runtime::ASM::addi(context->r7, context->r3, fn_cbForReadAsync @ Get_MemoryOffset_LowBit);
/*803C55D8 003C23D8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r26));
/*803C55DC 003C23DC*/ PPC::Runtime::ASM::addi(context->r3, context->r26, 0x0);
/*803C55E0 003C23E0*/ PPC::Runtime::ASM::addi(context->r4, context->r27, 0x0);
/*803C55E4 003C23E4*/ PPC::Runtime::ASM::addi(context->r5, context->r28, 0x0);
/*803C55E8 003C23E8*/ PPC::Runtime::ASM::addi(context->r8, context->r31, 0x0);
/*803C55EC 003C23EC*/ PPC::Runtime::ASM::add(context->r6, context->r0, context->r29);
/*803C55F0 003C23F0*/ PPC::Runtime::ASM::bl(fn_DVDReadAbsAsyncPrio);
/*803C55F4 003C23F4*/ PPC::Runtime::ASM::lmw(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*803C55F8 003C23F8*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*803C55FC 003C23FC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*803C5600 003C2400*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x38);
/*803C5604 003C2404*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803C5608 003C2408*/ PPC::Runtime::ASM::blr();
}