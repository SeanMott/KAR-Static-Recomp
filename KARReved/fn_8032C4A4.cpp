//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802D4184.hpp"
#include "fn_8028E058.hpp"
#include "fn_802D4184.hpp"
#include "fn_8028E058.hpp"
#include "fn_8037B028.hpp"
#include "fn_80379398.hpp"
#include "fn_8032C618.hpp"



void fn_8032C4A4(PPC::Runtime::GCContext* context)
{
/*8032C4A4 003292A4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8032C4A8 003292A8*/ PPC::Runtime::ASM::mflr(context->r0);
/*8032C4AC 003292AC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8032C4B0 003292B0*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*8032C4B4 003292B4*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*8032C4B8 003292B8*/ PPC::Runtime::ASM::mr(context->r27, context->r4);
/*8032C4BC 003292BC*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8032C4C0 003292C0*/ PPC::Runtime::ASM::mr(context->r28, context->r6);
/*8032C4C4 003292C4*/ PPC::Runtime::ASM::mr(context->r29, context->r7);
/*8032C4C8 003292C8*/ PPC::Runtime::ASM::mr(context->r30, context->r8);
/*8032C4CC 003292CC*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*8032C4D0 003292D0*/ PPC::Runtime::ASM::mr(context->r4, context->r5);
/*8032C4D4 003292D4*/ PPC::Runtime::ASM::bl(fn_8038D0A8);
/*8032C4D8 003292D8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8032C4DC 003292DC*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*8032C4E0 003292E0*/ PPC::Runtime::ASM::mr(context->r4, context->r28);
/*8032C4E4 003292E4*/ PPC::Runtime::ASM::bl(fn_8038D0A8);
/*8032C4E8 003292E8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8032C4EC 003292EC*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*8032C4F0 003292F0*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*8032C4F4 003292F4*/ PPC::Runtime::ASM::bl(fn_8038D0A8);
/*8032C4F8 003292F8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8032C4FC 003292FC*/ PPC::Runtime::ASM::lis(context->r3, fn_802D4184 @ Get_MemoryOffset_HighBit);
/*8032C500 00329300*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4120 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8032C504 00329304*/ PPC::Runtime::ASM::lis(context->r5, fn_8028E058 @ Get_MemoryOffset_HighBit);
/*8032C508 00329308*/ PPC::Runtime::ASM::addi(context->r4, context->r3, fn_802D4184 @ Get_MemoryOffset_LowBit);
/*8032C50C 0032930C*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x30);
/*8032C510 00329310*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*8032C514 00329314*/ PPC::Runtime::ASM::addi(context->r5, context->r5, fn_8028E058 @ Get_MemoryOffset_LowBit);
/*8032C518 00329318*/ PPC::Runtime::ASM::li(context->r6, 0x4c);
/*8032C51C 0032931C*/ PPC::Runtime::ASM::li(context->r7, 0x5);
/*8032C520 00329320*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*8032C524 00329324*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*8032C528 00329328*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r31));
/*8032C52C 0032932C*/ PPC::Runtime::ASM::bl(fn___construct_array);
/*8032C530 00329330*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BDF2C @ Get_MemoryOffset_HighBit);
/*8032C534 00329334*/ PPC::Runtime::ASM::addi(context->r27, context->r31, 0x1ac);
/*8032C538 00329338*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804BDF2C @ Get_MemoryOffset_LowBit);
/*8032C53C 0032933C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8032C540 00329340*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1ac, context->r31));
/*8032C544 00329344*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*8032C548 00329348*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b0, context->r31));
/*8032C54C 0032934C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b4, context->r31));
/*8032C550 00329350*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*8032C554 00329354*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*8032C558 00329358*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8032C55C 0032935C*/ PPC::Runtime::ASM::bctrl();
/*8032C560 00329360*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BDF70 @ Get_MemoryOffset_HighBit);
/*8032C564 00329364*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*8032C568 00329368*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BDF70 @ Get_MemoryOffset_LowBit);
/*8032C56C 0032936C*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*8032C570 00329370*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*8032C574 00329374*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8032C578 00329378*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8032C57C 0032937C*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8032C580 00329380*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*8032C584 00329384*/ PPC::Runtime::ASM::bl(fn_8037B028);
/*8032C588 00329388*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x1f8);
/*8032C58C 0032938C*/ PPC::Runtime::ASM::bl(fn_80379398);
/*8032C590 00329390*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8032C594 00329394*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*8032C598 00329398*/ PPC::Runtime::ASM::bne(.L_8032C5AC);
/*8032C59C 0032939C*/ PPC::Runtime::ASM::li(context->r3, lbl_805DA9FC @ Get_MemoryOffset_SDA21);
/*8032C5A0 003293A0*/ PPC::Runtime::ASM::li(context->r4, 0x3e4);
/*8032C5A4 003293A4*/ PPC::Runtime::ASM::li(context->r5, lbl_805DAA04 @ Get_MemoryOffset_SDA21);
/*8032C5A8 003293A8*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8032C5AC, 0x8032C5AC) //this is a jump label
/*8032C5AC 003293AC*/ PPC::Runtime::ASM::addic.(context->r0, context->r31, 0xc);
/*8032C5B0 003293B0*/ PPC::Runtime::ASM::bne(.L_8032C5C8);
/*8032C5B4 003293B4*/ PPC::Runtime::ASM::lis(context->r4, lbl_804E45B0 @ Get_MemoryOffset_HighBit);
/*8032C5B8 003293B8*/ PPC::Runtime::ASM::li(context->r3, lbl_805DA9FC @ Get_MemoryOffset_SDA21);
/*8032C5BC 003293BC*/ PPC::Runtime::ASM::addi(context->r5, context->r4, lbl_804E45B0 @ Get_MemoryOffset_LowBit);
/*8032C5C0 003293C0*/ PPC::Runtime::ASM::li(context->r4, 0x3e5);
/*8032C5C4 003293C4*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8032C5C8, 0x8032C5C8) //this is a jump label
/*8032C5C8 003293C8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r30));
/*8032C5CC 003293CC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*8032C5D0 003293D0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r30));
/*8032C5D4 003293D4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*8032C5D8 003293D8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r30));
/*8032C5DC 003293DC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*8032C5E0 003293E0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8032C5E4 003293E4*/ PPC::Runtime::ASM::bl(fn_HSD_JObjRemoveAnim);
/*8032C5E8 003293E8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8032C5EC 003293EC*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*8032C5F0 003293F0*/ PPC::Runtime::ASM::bl(fn_removeBigStarModel);
/*8032C5F4 003293F4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8032C5F8 003293F8*/ PPC::Runtime::ASM::bl(fn_8032C618);
/*8032C5FC 003293FC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8032C600 00329400*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*8032C604 00329404*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*8032C608 00329408*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8032C60C 0032940C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8032C610 00329410*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8032C614 00329414*/ PPC::Runtime::ASM::blr();
}