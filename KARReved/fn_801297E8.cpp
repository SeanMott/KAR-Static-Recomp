//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80112044.hpp"
#include "fn_getPlayerCount.hpp"
#include "fn_801147DC.hpp"
#include "fn_8012952C.hpp"
#include "fn_8012952C.hpp"
#include "fn_80114D9C.hpp"
#include "fn_80114E24.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_updateGraphic_SpeedometerFill.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"



void fn_801297E8(PPC::Runtime::GCContext* context)
{
/*801297E8 001265E8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*801297EC 001265EC*/ PPC::Runtime::ASM::mflr(context->r0);
/*801297F0 001265F0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801297F4 001265F4*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*801297F8 001265F8*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*801297FC 001265FC*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*80129800 00126600*/ PPC::Runtime::ASM::bl(fn_80112044);
/*80129804 00126604*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80129808 00126608*/ PPC::Runtime::ASM::bl(fn_getPlayerCount);
/*8012980C 0012660C*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*80129810 00126610*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*80129814 00126614*/ PPC::Runtime::ASM::bne(.L_80129924);
/*80129818 00126618*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6e0, context->r30));
/*8012981C 0012661C*/ PPC::Runtime::ASM::b(.L_80129824);
/*80129820 00126620*/ PPC::Runtime::ASM::b(.L_80129924);
RUNTIME_PPC_JUMP_LABEL(.L_80129824, 0x80129824) //this is a jump label
/*80129824 00126624*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*80129828 00126628*/ PPC::Runtime::ASM::li(context->r4, 0x1b);
/*8012982C 0012662C*/ PPC::Runtime::ASM::li(context->r5, 0x15);
/*80129830 00126630*/ PPC::Runtime::ASM::li(context->r6, 0x1);
/*80129834 00126634*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80129838 00126638*/ PPC::Runtime::ASM::bl(fn_801147DC);
/*8012983C 0012663C*/ PPC::Runtime::ASM::lis(context->r4, fn_8012952C @ Get_MemoryOffset_HighBit);
/*80129840 00126640*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*80129844 00126644*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*80129848 00126648*/ PPC::Runtime::ASM::li(context->r5, 0x14);
/*8012984C 0012664C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_8012952C @ Get_MemoryOffset_LowBit);
/*80129850 00126650*/ PPC::Runtime::ASM::bl(fn_804288A4);
/*80129854 00126654*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*80129858 00126658*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8012985C 0012665C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DFFB8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80129860 00126660*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DFFBC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80129864 00126664*/ PPC::Runtime::ASM::bl(fn_80114D9C);
/*80129868 00126668*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8012986C 0012666C*/ PPC::Runtime::ASM::mr(context->r5, context->r27);
/*80129870 00126670*/ PPC::Runtime::ASM::li(context->r4, 0x44);
/*80129874 00126674*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80129878 00126678*/ PPC::Runtime::ASM::bl(fn_80114E24);
/*8012987C 0012667C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80129880 00126680*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80129884 00126684*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*80129888 00126688*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8012988C 0012668C*/ PPC::Runtime::ASM::li(context->r4, 0x7);
/*80129890 00126690*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80129894 00126694*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r31));
/*80129898 00126698*/ PPC::Runtime::ASM::li(context->r0, -0x1);
/*8012989C 0012669C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*801298A0 001266A0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r31));
/*801298A4 001266A4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*801298A8 001266A8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r31));
/*801298AC 001266AC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*801298B0 001266B0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*801298B4 001266B4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r31));
/*801298B8 001266B8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*801298BC 001266BC*/ PPC::Runtime::ASM::bl(fn_updateGraphic_SpeedometerFill);
/*801298C0 001266C0*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*801298C4 001266C4*/ PPC::Runtime::ASM::li(context->r4, 0x11);
/*801298C8 001266C8*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*801298CC 001266CC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r31));
/*801298D0 001266D0*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*801298D4 001266D4*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*801298D8 001266D8*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*801298DC 001266DC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r31));
/*801298E0 001266E0*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*801298E4 001266E4*/ PPC::Runtime::ASM::li(context->r4, 0xf);
/*801298E8 001266E8*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*801298EC 001266EC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r31));
/*801298F0 001266F0*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*801298F4 001266F4*/ PPC::Runtime::ASM::li(context->r4, 0xe);
/*801298F8 001266F8*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*801298FC 001266FC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r31));
/*80129900 00126700*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80129904 00126704*/ PPC::Runtime::ASM::li(context->r4, 0xd);
/*80129908 00126708*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8012990C 0012670C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*80129910 00126710*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80129914 00126714*/ PPC::Runtime::ASM::li(context->r4, 0xc);
/*80129918 00126718*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8012991C 0012671C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r31));
/*80129920 00126720*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6e4, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_80129924, 0x80129924) //this is a jump label
/*80129924 00126724*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*80129928 00126728*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*8012992C 0012672C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80129930 00126730*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80129934 00126734*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80129938 00126738*/ PPC::Runtime::ASM::blr();
}