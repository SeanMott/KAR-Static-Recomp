//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_HSD_MObjSetCurrent.hpp"
#include "fn_HSD_MObjSetCurrent.hpp"



void fn_HSD_DObjDisp(PPC::Runtime::GCContext* context)
{
/*803F4998 003F1798*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*803F499C 003F179C*/ PPC::Runtime::ASM::mflr(context->r0);
/*803F49A0 003F17A0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803F49A4 003F17A4*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*803F49A8 003F17A8*/ PPC::Runtime::ASM::bl(_savegpr_26);
/*803F49AC 003F17AC*/ PPC::Runtime::ASM::mr(context->r26, context->r3);
/*803F49B0 003F17B0*/ PPC::Runtime::ASM::mr(context->r27, context->r4);
/*803F49B4 003F17B4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*803F49B8 003F17B8*/ PPC::Runtime::ASM::mr(context->r28, context->r5);
/*803F49BC 003F17BC*/ PPC::Runtime::ASM::mr(context->r29, context->r6);
/*803F49C0 003F17C0*/ PPC::Runtime::ASM::bl(fn_HSD_MObjSetCurrent);
/*803F49C4 003F17C4*/ PPC::Runtime::ASM::rlwinm.(context->r31, context->r29, 0, 5, 5);
/*803F49C8 003F17C8*/ PPC::Runtime::ASM::bne(.L_803F49E4);
/*803F49CC 003F17CC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r26));
/*803F49D0 003F17D0*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*803F49D4 003F17D4*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803F49D8 003F17D8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r5));
/*803F49DC 003F17DC*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803F49E0 003F17E0*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_803F49E4, 0x803F49E4) //this is a jump label
/*803F49E4 003F17E4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r26));
/*803F49E8 003F17E8*/ PPC::Runtime::ASM::b(.L_803F4A10);
RUNTIME_PPC_JUMP_LABEL(.L_803F49EC, 0x803F49EC) //this is a jump label
/*803F49EC 003F17EC*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*803F49F0 003F17F0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*803F49F4 003F17F4*/ PPC::Runtime::ASM::mr(context->r4, context->r27);
/*803F49F8 003F17F8*/ PPC::Runtime::ASM::mr(context->r5, context->r28);
/*803F49FC 003F17FC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r6));
/*803F4A00 003F1800*/ PPC::Runtime::ASM::mr(context->r6, context->r29);
/*803F4A04 003F1804*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803F4A08 003F1808*/ PPC::Runtime::ASM::bctrl();
/*803F4A0C 003F180C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_803F4A10, 0x803F4A10) //this is a jump label
/*803F4A10 003F1810*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*803F4A14 003F1814*/ PPC::Runtime::ASM::bne(.L_803F49EC);
/*803F4A18 003F1818*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*803F4A1C 003F181C*/ PPC::Runtime::ASM::bne(.L_803F4A38);
/*803F4A20 003F1820*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r26));
/*803F4A24 003F1824*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*803F4A28 003F1828*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803F4A2C 003F182C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r5));
/*803F4A30 003F1830*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803F4A34 003F1834*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_803F4A38, 0x803F4A38) //this is a jump label
/*803F4A38 003F1838*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803F4A3C 003F183C*/ PPC::Runtime::ASM::bl(fn_HSD_MObjSetCurrent);
/*803F4A40 003F1840*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*803F4A44 003F1844*/ PPC::Runtime::ASM::bl(_restgpr_26);
/*803F4A48 003F1848*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803F4A4C 003F184C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803F4A50 003F1850*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*803F4A54 003F1854*/ PPC::Runtime::ASM::blr();
}