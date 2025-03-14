//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn___CARDGetControlBlock.hpp"
#include "OSDisableInterrupts.hpp"
#include "fn_EXISetExiCallback.hpp"
#include "fn_EXIDetach.hpp"
#include "fn_OSCancelAlarm.hpp"
#include "OSRestoreInterrupts.hpp"



void fn_CARDUnmount(PPC::Runtime::GCContext* context)
{
/*803E65D0 003E33D0*/ PPC::Runtime::ASM::mflr(context->r0);
/*803E65D4 003E33D4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803E65D8 003E33D8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*803E65DC 003E33DC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803E65E0 003E33E0*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0xc);
/*803E65E4 003E33E4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803E65E8 003E33E8*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803E65EC 003E33EC*/ PPC::Runtime::ASM::addi(context->r29, context->r3, 0x0);
/*803E65F0 003E33F0*/ PPC::Runtime::ASM::bl(fn___CARDGetControlBlock);
/*803E65F4 003E33F4*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*803E65F8 003E33F8*/ PPC::Runtime::ASM::bge(.L_803E6600);
/*803E65FC 003E33FC*/ PPC::Runtime::ASM::b(.L_803E6660);
RUNTIME_PPC_JUMP_LABEL(.L_803E6600, 0x803E6600) //this is a jump label
/*803E6600 003E3400*/ PPC::Runtime::ASM::mulli(context->r4, context->r29, 0x110);
/*803E6604 003E3404*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_18056E4E8 @ Get_MemoryOffset_HighBit);
/*803E6608 003E3408*/ PPC::Runtime::ASM::addi(context->r0, context->r3, STRUCT_BYTE4_COUNT_18056E4E8 @ Get_MemoryOffset_LowBit);
/*803E660C 003E340C*/ PPC::Runtime::ASM::add(context->r30, context->r0, context->r4);
/*803E6610 003E3410*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*803E6614 003E3414*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*803E6618 003E3418*/ PPC::Runtime::ASM::addi(context->r31, context->r3, 0x0);
/*803E661C 003E341C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*803E6620 003E3420*/ PPC::Runtime::ASM::beq(.L_803E6654);
/*803E6624 003E3424*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x0);
/*803E6628 003E3428*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*803E662C 003E342C*/ PPC::Runtime::ASM::bl(fn_EXISetExiCallback);
/*803E6630 003E3430*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*803E6634 003E3434*/ PPC::Runtime::ASM::bl(fn_EXIDetach);
/*803E6638 003E3438*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xe0);
/*803E663C 003E343C*/ PPC::Runtime::ASM::bl(fn_OSCancelAlarm);
/*803E6640 003E3440*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803E6644 003E3444*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*803E6648 003E3448*/ PPC::Runtime::ASM::li(context->r0, -0x3);
/*803E664C 003E344C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*803E6650 003E3450*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_803E6654, 0x803E6654) //this is a jump label
/*803E6654 003E3454*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*803E6658 003E3458*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*803E665C 003E345C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_803E6660, 0x803E6660) //this is a jump label
/*803E6660 003E3460*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803E6664 003E3464*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803E6668 003E3468*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803E666C 003E346C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803E6670 003E3470*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*803E6674 003E3474*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803E6678 003E3478*/ PPC::Runtime::ASM::blr();
}