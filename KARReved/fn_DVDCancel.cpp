//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_cbForCancelSync.hpp"
#include "fn_cbForCancelSync.hpp"
#include "fn_DVDCancelAsync.hpp"
#include "OSDisableInterrupts.hpp"
#include "fn_OSSleepThread.hpp"
#include "OSRestoreInterrupts.hpp"



void fn_DVDCancel(PPC::Runtime::GCContext* context)
{
/*803C7B88 003C4988*/ PPC::Runtime::ASM::mflr(context->r0);
/*803C7B8C 003C498C*/ PPC::Runtime::ASM::lis(context->r4, fn_cbForCancelSync @ Get_MemoryOffset_HighBit);
/*803C7B90 003C4990*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803C7B94 003C4994*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_cbForCancelSync @ Get_MemoryOffset_LowBit);
/*803C7B98 003C4998*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x18, context->r1));
/*803C7B9C 003C499C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803C7BA0 003C49A0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803C7BA4 003C49A4*/ PPC::Runtime::ASM::addi(context->r30, context->r3, 0x0);
/*803C7BA8 003C49A8*/ PPC::Runtime::ASM::bl(fn_DVDCancelAsync);
/*803C7BAC 003C49AC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*803C7BB0 003C49B0*/ PPC::Runtime::ASM::bne(.L_803C7BBC);
/*803C7BB4 003C49B4*/ PPC::Runtime::ASM::li(context->r3, -0x1);
/*803C7BB8 003C49B8*/ PPC::Runtime::ASM::b(.L_803C7C1C);
RUNTIME_PPC_JUMP_LABEL(.L_803C7BBC, 0x803C7BBC) //this is a jump label
/*803C7BBC 003C49BC*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*803C7BC0 003C49C0*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_803C7BC4, 0x803C7BC4) //this is a jump label
/*803C7BC4 003C49C4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*803C7BC8 003C49C8*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*803C7BCC 003C49CC*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x1);
/*803C7BD0 003C49D0*/ PPC::Runtime::ASM::ble(.L_803C7C10);
/*803C7BD4 003C49D4*/ PPC::Runtime::ASM::cmpwi(context->r3, 0xa);
/*803C7BD8 003C49D8*/ PPC::Runtime::ASM::beq(.L_803C7C10);
/*803C7BDC 003C49DC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x3);
/*803C7BE0 003C49E0*/ PPC::Runtime::ASM::bne(.L_803C7C04);
/*803C7BE4 003C49E4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*803C7BE8 003C49E8*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x4);
/*803C7BEC 003C49EC*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x1);
/*803C7BF0 003C49F0*/ PPC::Runtime::ASM::ble(.L_803C7C10);
/*803C7BF4 003C49F4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0xd);
/*803C7BF8 003C49F8*/ PPC::Runtime::ASM::beq(.L_803C7C10);
/*803C7BFC 003C49FC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0xf);
/*803C7C00 003C4A00*/ PPC::Runtime::ASM::beq(.L_803C7C10);
RUNTIME_PPC_JUMP_LABEL(.L_803C7C04, 0x803C7C04) //this is a jump label
/*803C7C04 003C4A04*/ PPC::Runtime::ASM::li(context->r3, __DVDThreadQueue @ Get_MemoryOffset_SDA21);
/*803C7C08 003C4A08*/ PPC::Runtime::ASM::bl(fn_OSSleepThread);
/*803C7C0C 003C4A0C*/ PPC::Runtime::ASM::b(.L_803C7BC4);
RUNTIME_PPC_JUMP_LABEL(.L_803C7C10, 0x803C7C10) //this is a jump label
/*803C7C10 003C4A10*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*803C7C14 003C4A14*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*803C7C18 003C4A18*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_803C7C1C, 0x803C7C1C) //this is a jump label
/*803C7C1C 003C4A1C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803C7C20 003C4A20*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803C7C24 003C4A24*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803C7C28 003C4A28*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x18);
/*803C7C2C 003C4A2C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803C7C30 003C4A30*/ PPC::Runtime::ASM::blr();
}