//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801FD118.hpp"
#include "fn_80062CA4.hpp"
#include "fn_800D1B34.hpp"
#include "fn_801FD118.hpp"
#include "fn_800D1838.hpp"
#include "fn_800D1860.hpp"
#include "fn_80062DD0.hpp"
#include "fn_80062DD0.hpp"
#include "fn_800D1B34.hpp"
#include "fn_801FD118.hpp"
#include "fn_800D1838.hpp"
#include "fn_800D1860.hpp"
#include "fn_80062DD0.hpp"
#include "fn_80062DD0.hpp"
#include "fn_801FD118.hpp"
#include "fn_800D1AC4.hpp"
#include "fn_800D1838.hpp"
#include "fn_800D1860.hpp"



void fn_802064B0(PPC::Runtime::GCContext* context)
{
/*802064B0 002032B0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x90, context->r1));
/*802064B4 002032B4*/ PPC::Runtime::ASM::mflr(context->r0);
/*802064B8 002032B8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r1));
/*802064BC 002032BC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r1));
/*802064C0 002032C0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r1));
/*802064C4 002032C4*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*802064C8 002032C8*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*802064CC 002032CC*/ PPC::Runtime::ASM::addi(context->r4, context->r29, 0x2f8);
/*802064D0 002032D0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x908, context->r3));
/*802064D4 002032D4*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x304);
/*802064D8 002032D8*/ PPC::Runtime::ASM::cntlzw(context->r0, context->r0);
/*802064DC 002032DC*/ PPC::Runtime::ASM::srwi(context->r30, context->r0, 5);
/*802064E0 002032E0*/ PPC::Runtime::ASM::bl(fn_801FD118);
/*802064E4 002032E4*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*802064E8 002032E8*/ PPC::Runtime::ASM::bne(.L_802069C8);
/*802064EC 002032EC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f8, context->r29));
/*802064F0 002032F0*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x50);
/*802064F4 002032F4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x304, context->r29));
/*802064F8 002032F8*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*802064FC 002032FC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*80206500 00203300*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2fc, context->r29));
/*80206504 00203304*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x308, context->r29));
/*80206508 00203308*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*8020650C 0020330C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*80206510 00203310*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x300, context->r29));
/*80206514 00203314*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30c, context->r29));
/*80206518 00203318*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*8020651C 0020331C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*80206520 00203320*/ PPC::Runtime::ASM::bl(fn_803D2158);
/*80206524 00203324*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2318 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80206528 00203328*/ PPC::Runtime::ASM::fcmpu(cr0, context->f0, context->f1);
/*8020652C 0020332C*/ PPC::Runtime::ASM::beq(.L_802069C8);
/*80206530 00203330*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x50);
/*80206534 00203334*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*80206538 00203338*/ PPC::Runtime::ASM::bl(fn_80062CA4);
/*8020653C 0020333C*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*80206540 00203340*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x68);
/*80206544 00203344*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E2320 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80206548 00203348*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x5c);
/*8020654C 0020334C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f8, context->r29));
/*80206550 00203350*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x74);
/*80206554 00203354*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*80206558 00203358*/ PPC::Runtime::ASM::fmadds(context->f0, context->f3, context->f2, context->f0);
/*8020655C 0020335C*/ PPC::Runtime::ASM::lfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*80206560 00203360*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E231C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80206564 00203364*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*80206568 00203368*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2fc, context->r29));
/*8020656C 0020336C*/ PPC::Runtime::ASM::fmadds(context->f0, context->f4, context->f2, context->f0);
/*80206570 00203370*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*80206574 00203374*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x300, context->r29));
/*80206578 00203378*/ PPC::Runtime::ASM::fmadds(context->f0, context->f5, context->f2, context->f0);
/*8020657C 0020337C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*80206580 00203380*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x304, context->r29));
/*80206584 00203384*/ PPC::Runtime::ASM::fmadds(context->f0, context->f3, context->f1, context->f0);
/*80206588 00203388*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1));
/*8020658C 0020338C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x308, context->r29));
/*80206590 00203390*/ PPC::Runtime::ASM::fmadds(context->f0, context->f4, context->f1, context->f0);
/*80206594 00203394*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r1));
/*80206598 00203398*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30c, context->r29));
/*8020659C 0020339C*/ PPC::Runtime::ASM::fmadds(context->f0, context->f5, context->f1, context->f0);
/*802065A0 002033A0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*802065A4 002033A4*/ PPC::Runtime::ASM::bl(fn_800D1B34);
/*802065A8 002033A8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*802065AC 002033AC*/ PPC::Runtime::ASM::cmpwi(context->r31, -0x1);
/*802065B0 002033B0*/ PPC::Runtime::ASM::beq(.L_802066F4);
/*802065B4 002033B4*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x5c);
/*802065B8 002033B8*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x74);
/*802065BC 002033BC*/ PPC::Runtime::ASM::bl(fn_801FD118);
/*802065C0 002033C0*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*802065C4 002033C4*/ PPC::Runtime::ASM::beq(.L_802065FC);
/*802065C8 002033C8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*802065CC 002033CC*/ PPC::Runtime::ASM::lfs(context->f5, STRUCT_FLOAT_COUNT_1805E2320 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802065D0 002033D0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*802065D4 002033D4*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*802065D8 002033D8*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*802065DC 002033DC*/ PPC::Runtime::ASM::fmadds(context->f4, context->f1, context->f5, context->f0);
/*802065E0 002033E0*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*802065E4 002033E4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*802065E8 002033E8*/ PPC::Runtime::ASM::fmadds(context->f2, context->f3, context->f5, context->f2);
/*802065EC 002033EC*/ PPC::Runtime::ASM::stfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*802065F0 002033F0*/ PPC::Runtime::ASM::fmadds(context->f0, context->f1, context->f5, context->f0);
/*802065F4 002033F4*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*802065F8 002033F8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_802065FC, 0x802065FC) //this is a jump label
/*802065FC 002033FC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80206600 00203400*/ PPC::Runtime::ASM::bl(fn_800D1838);
/*80206604 00203404*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80206608 00203408*/ PPC::Runtime::ASM::bne(.L_802066D8);
/*8020660C 0020340C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80206610 00203410*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x2c);
/*80206614 00203414*/ PPC::Runtime::ASM::bl(fn_800D1860);
/*80206618 00203418*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*8020661C 0020341C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x2c);
/*80206620 00203420*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r1));
/*80206624 00203424*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x44);
/*80206628 00203428*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*8020662C 0020342C*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x38);
/*80206630 00203430*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1));
/*80206634 00203434*/ PPC::Runtime::ASM::fsubs(context->f4, context->f1, context->f0);
/*80206638 00203438*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*8020663C 0020343C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r1));
/*80206640 00203440*/ PPC::Runtime::ASM::fsubs(context->f2, context->f3, context->f2);
/*80206644 00203444*/ PPC::Runtime::ASM::stfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*80206648 00203448*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*8020664C 0020344C*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*80206650 00203450*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*80206654 00203454*/ PPC::Runtime::ASM::bl(fn_80062DD0);
/*80206658 00203458*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x38);
/*8020665C 0020345C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x2c);
/*80206660 00203460*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x44);
/*80206664 00203464*/ PPC::Runtime::ASM::bl(fn_80062DD0);
/*80206668 00203468*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x74);
/*8020666C 0020346C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x5c);
/*80206670 00203470*/ PPC::Runtime::ASM::bl(fn_803D22F4);
/*80206674 00203474*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*80206678 00203478*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r1));
/*8020667C 0020347C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*80206680 00203480*/ PPC::Runtime::ASM::fmadds(context->f7, context->f3, context->f1, context->f0);
/*80206684 00203484*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f8, context->r29));
/*80206688 00203488*/ PPC::Runtime::ASM::lfs(context->f6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*8020668C 0020348C*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1));
/*80206690 00203490*/ PPC::Runtime::ASM::fsubs(context->f7, context->f7, context->f2);
/*80206694 00203494*/ PPC::Runtime::ASM::lfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*80206698 00203498*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r1));
/*8020669C 0020349C*/ PPC::Runtime::ASM::fmadds(context->f6, context->f6, context->f1, context->f3);
/*802066A0 002034A0*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*802066A4 002034A4*/ PPC::Runtime::ASM::fadds(context->f0, context->f0, context->f7);
/*802066A8 002034A8*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*802066AC 002034AC*/ PPC::Runtime::ASM::fmadds(context->f1, context->f5, context->f1, context->f4);
/*802066B0 002034B0*/ PPC::Runtime::ASM::fsubs(context->f6, context->f6, context->f3);
/*802066B4 002034B4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f8, context->r29));
/*802066B8 002034B8*/ PPC::Runtime::ASM::fsubs(context->f1, context->f1, context->f2);
/*802066BC 002034BC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2fc, context->r29));
/*802066C0 002034C0*/ PPC::Runtime::ASM::fadds(context->f0, context->f0, context->f6);
/*802066C4 002034C4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2fc, context->r29));
/*802066C8 002034C8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x300, context->r29));
/*802066CC 002034CC*/ PPC::Runtime::ASM::fadds(context->f0, context->f0, context->f1);
/*802066D0 002034D0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x300, context->r29));
/*802066D4 002034D4*/ PPC::Runtime::ASM::b(.L_802068A8);
RUNTIME_PPC_JUMP_LABEL(.L_802066D8, 0x802066D8) //this is a jump label
/*802066D8 002034D8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r1));
/*802066DC 002034DC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1));
/*802066E0 002034E0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f8, context->r29));
/*802066E4 002034E4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2fc, context->r29));
/*802066E8 002034E8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r1));
/*802066EC 002034EC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x300, context->r29));
/*802066F0 002034F0*/ PPC::Runtime::ASM::b(.L_802068A8);
RUNTIME_PPC_JUMP_LABEL(.L_802066F4, 0x802066F4) //this is a jump label
/*802066F4 002034F4*/ PPC::Runtime::ASM::lfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x334, context->r29));
/*802066F8 002034F8*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x68);
/*802066FC 002034FC*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805E2320 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80206700 00203500*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x5c);
/*80206704 00203504*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f8, context->r29));
/*80206708 00203508*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x74);
/*8020670C 0020350C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E231C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80206710 00203510*/ PPC::Runtime::ASM::fmadds(context->f0, context->f5, context->f4, context->f0);
/*80206714 00203514*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*80206718 00203518*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x338, context->r29));
/*8020671C 0020351C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2fc, context->r29));
/*80206720 00203520*/ PPC::Runtime::ASM::fmadds(context->f0, context->f3, context->f4, context->f0);
/*80206724 00203524*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*80206728 00203528*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x33c, context->r29));
/*8020672C 0020352C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x300, context->r29));
/*80206730 00203530*/ PPC::Runtime::ASM::fmadds(context->f0, context->f2, context->f4, context->f0);
/*80206734 00203534*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*80206738 00203538*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x304, context->r29));
/*8020673C 0020353C*/ PPC::Runtime::ASM::fmadds(context->f0, context->f5, context->f1, context->f0);
/*80206740 00203540*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1));
/*80206744 00203544*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x308, context->r29));
/*80206748 00203548*/ PPC::Runtime::ASM::fmadds(context->f0, context->f3, context->f1, context->f0);
/*8020674C 0020354C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r1));
/*80206750 00203550*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30c, context->r29));
/*80206754 00203554*/ PPC::Runtime::ASM::fmadds(context->f0, context->f2, context->f1, context->f0);
/*80206758 00203558*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*8020675C 0020355C*/ PPC::Runtime::ASM::bl(fn_800D1B34);
/*80206760 00203560*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80206764 00203564*/ PPC::Runtime::ASM::cmpwi(context->r31, -0x1);
/*80206768 00203568*/ PPC::Runtime::ASM::beq(.L_802068A8);
/*8020676C 0020356C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x5c);
/*80206770 00203570*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x74);
/*80206774 00203574*/ PPC::Runtime::ASM::bl(fn_801FD118);
/*80206778 00203578*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8020677C 0020357C*/ PPC::Runtime::ASM::beq(.L_802067B4);
/*80206780 00203580*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x334, context->r29));
/*80206784 00203584*/ PPC::Runtime::ASM::lfs(context->f3, STRUCT_FLOAT_COUNT_1805E2320 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80206788 00203588*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*8020678C 0020358C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*80206790 00203590*/ PPC::Runtime::ASM::fmadds(context->f2, context->f2, context->f3, context->f0);
/*80206794 00203594*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*80206798 00203598*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*8020679C 0020359C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x338, context->r29));
/*802067A0 002035A0*/ PPC::Runtime::ASM::fmadds(context->f1, context->f2, context->f3, context->f1);
/*802067A4 002035A4*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*802067A8 002035A8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x33c, context->r29));
/*802067AC 002035AC*/ PPC::Runtime::ASM::fmadds(context->f0, context->f1, context->f3, context->f0);
/*802067B0 002035B0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_802067B4, 0x802067B4) //this is a jump label
/*802067B4 002035B4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802067B8 002035B8*/ PPC::Runtime::ASM::bl(fn_800D1838);
/*802067BC 002035BC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*802067C0 002035C0*/ PPC::Runtime::ASM::bne(.L_80206890);
/*802067C4 002035C4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802067C8 002035C8*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*802067CC 002035CC*/ PPC::Runtime::ASM::bl(fn_800D1860);
/*802067D0 002035D0*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*802067D4 002035D4*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*802067D8 002035D8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r1));
/*802067DC 002035DC*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x20);
/*802067E0 002035E0*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*802067E4 002035E4*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x14);
/*802067E8 002035E8*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1));
/*802067EC 002035EC*/ PPC::Runtime::ASM::fsubs(context->f4, context->f1, context->f0);
/*802067F0 002035F0*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*802067F4 002035F4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r1));
/*802067F8 002035F8*/ PPC::Runtime::ASM::fsubs(context->f2, context->f3, context->f2);
/*802067FC 002035FC*/ PPC::Runtime::ASM::stfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80206800 00203600*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*80206804 00203604*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80206808 00203608*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8020680C 0020360C*/ PPC::Runtime::ASM::bl(fn_80062DD0);
/*80206810 00203610*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x14);
/*80206814 00203614*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*80206818 00203618*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x20);
/*8020681C 0020361C*/ PPC::Runtime::ASM::bl(fn_80062DD0);
/*80206820 00203620*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x74);
/*80206824 00203624*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x5c);
/*80206828 00203628*/ PPC::Runtime::ASM::bl(fn_803D22F4);
/*8020682C 0020362C*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80206830 00203630*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r1));
/*80206834 00203634*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*80206838 00203638*/ PPC::Runtime::ASM::fmadds(context->f7, context->f3, context->f1, context->f0);
/*8020683C 0020363C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f8, context->r29));
/*80206840 00203640*/ PPC::Runtime::ASM::lfs(context->f6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80206844 00203644*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1));
/*80206848 00203648*/ PPC::Runtime::ASM::fsubs(context->f7, context->f7, context->f2);
/*8020684C 0020364C*/ PPC::Runtime::ASM::lfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*80206850 00203650*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r1));
/*80206854 00203654*/ PPC::Runtime::ASM::fmadds(context->f6, context->f6, context->f1, context->f3);
/*80206858 00203658*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*8020685C 0020365C*/ PPC::Runtime::ASM::fadds(context->f0, context->f0, context->f7);
/*80206860 00203660*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*80206864 00203664*/ PPC::Runtime::ASM::fmadds(context->f1, context->f5, context->f1, context->f4);
/*80206868 00203668*/ PPC::Runtime::ASM::fsubs(context->f6, context->f6, context->f3);
/*8020686C 0020366C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f8, context->r29));
/*80206870 00203670*/ PPC::Runtime::ASM::fsubs(context->f1, context->f1, context->f2);
/*80206874 00203674*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2fc, context->r29));
/*80206878 00203678*/ PPC::Runtime::ASM::fadds(context->f0, context->f0, context->f6);
/*8020687C 0020367C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2fc, context->r29));
/*80206880 00203680*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x300, context->r29));
/*80206884 00203684*/ PPC::Runtime::ASM::fadds(context->f0, context->f0, context->f1);
/*80206888 00203688*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x300, context->r29));
/*8020688C 0020368C*/ PPC::Runtime::ASM::b(.L_802068A8);
RUNTIME_PPC_JUMP_LABEL(.L_80206890, 0x80206890) //this is a jump label
/*80206890 00203690*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r1));
/*80206894 00203694*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1));
/*80206898 00203698*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f8, context->r29));
/*8020689C 0020369C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2fc, context->r29));
/*802068A0 002036A0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r1));
/*802068A4 002036A4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x300, context->r29));
RUNTIME_PPC_JUMP_LABEL(.L_802068A8, 0x802068A8) //this is a jump label
/*802068A8 002036A8*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x95c, context->r29));
/*802068AC 002036AC*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x68);
/*802068B0 002036B0*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*802068B4 002036B4*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x5c);
/*802068B8 002036B8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f8, context->r29));
/*802068BC 002036BC*/ PPC::Runtime::ASM::lfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*802068C0 002036C0*/ PPC::Runtime::ASM::fmadds(context->f1, context->f4, context->f3, context->f0);
/*802068C4 002036C4*/ PPC::Runtime::ASM::lfs(context->f9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*802068C8 002036C8*/ PPC::Runtime::ASM::lfs(context->f6, STRUCT_FLOAT_COUNT_1805E231C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802068CC 002036CC*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E2320 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802068D0 002036D0*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*802068D4 002036D4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2fc, context->r29));
/*802068D8 002036D8*/ PPC::Runtime::ASM::fmadds(context->f8, context->f5, context->f3, context->f0);
/*802068DC 002036DC*/ PPC::Runtime::ASM::stfs(context->f8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*802068E0 002036E0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x300, context->r29));
/*802068E4 002036E4*/ PPC::Runtime::ASM::fmadds(context->f7, context->f9, context->f3, context->f0);
/*802068E8 002036E8*/ PPC::Runtime::ASM::stfs(context->f7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*802068EC 002036EC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x304, context->r29));
/*802068F0 002036F0*/ PPC::Runtime::ASM::fmadds(context->f3, context->f4, context->f6, context->f0);
/*802068F4 002036F4*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1));
/*802068F8 002036F8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x308, context->r29));
/*802068FC 002036FC*/ PPC::Runtime::ASM::fmadds(context->f4, context->f5, context->f6, context->f0);
/*80206900 00203700*/ PPC::Runtime::ASM::stfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r1));
/*80206904 00203704*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30c, context->r29));
/*80206908 00203708*/ PPC::Runtime::ASM::fmadds(context->f5, context->f9, context->f6, context->f0);
/*8020690C 0020370C*/ PPC::Runtime::ASM::stfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*80206910 00203710*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x340, context->r29));
/*80206914 00203714*/ PPC::Runtime::ASM::fmadds(context->f1, context->f0, context->f6, context->f1);
/*80206918 00203718*/ PPC::Runtime::ASM::fmadds(context->f0, context->f0, context->f2, context->f3);
/*8020691C 0020371C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*80206920 00203720*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x344, context->r29));
/*80206924 00203724*/ PPC::Runtime::ASM::fmadds(context->f3, context->f1, context->f6, context->f8);
/*80206928 00203728*/ PPC::Runtime::ASM::fmadds(context->f1, context->f1, context->f2, context->f4);
/*8020692C 0020372C*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*80206930 00203730*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x348, context->r29));
/*80206934 00203734*/ PPC::Runtime::ASM::fmadds(context->f3, context->f4, context->f6, context->f7);
/*80206938 00203738*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1));
/*8020693C 0020373C*/ PPC::Runtime::ASM::fmadds(context->f0, context->f4, context->f2, context->f5);
/*80206940 00203740*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r1));
/*80206944 00203744*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*80206948 00203748*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*8020694C 0020374C*/ PPC::Runtime::ASM::bl(fn_801FD118);
/*80206950 00203750*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80206954 00203754*/ PPC::Runtime::ASM::bne(.L_802069C8);
/*80206958 00203758*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x68);
/*8020695C 0020375C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x5c);
/*80206960 00203760*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x74);
/*80206964 00203764*/ PPC::Runtime::ASM::bl(fn_800D1AC4);
/*80206968 00203768*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x1);
/*8020696C 0020376C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x59c, context->r29));
/*80206970 00203770*/ PPC::Runtime::ASM::beq(.L_802069C8);
/*80206974 00203774*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x59c, context->r29));
/*80206978 00203778*/ PPC::Runtime::ASM::bl(fn_800D1838);
/*8020697C 0020377C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80206980 00203780*/ PPC::Runtime::ASM::bne(.L_80206990);
/*80206984 00203784*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x59c, context->r29));
/*80206988 00203788*/ PPC::Runtime::ASM::addi(context->r4, context->r29, 0x5b8);
/*8020698C 0020378C*/ PPC::Runtime::ASM::bl(fn_800D1860);
RUNTIME_PPC_JUMP_LABEL(.L_80206990, 0x80206990) //this is a jump label
/*80206990 00203790*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x95c, context->r29));
/*80206994 00203794*/ PPC::Runtime::ASM::li(context->r30, 0x1);
/*80206998 00203798*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x340, context->r29));
/*8020699C 0020379C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r1));
/*802069A0 002037A0*/ PPC::Runtime::ASM::fmadds(context->f0, context->f1, context->f2, context->f0);
/*802069A4 002037A4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f8, context->r29));
/*802069A8 002037A8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x344, context->r29));
/*802069AC 002037AC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1));
/*802069B0 002037B0*/ PPC::Runtime::ASM::fmadds(context->f0, context->f1, context->f2, context->f0);
/*802069B4 002037B4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2fc, context->r29));
/*802069B8 002037B8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x348, context->r29));
/*802069BC 002037BC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r1));
/*802069C0 002037C0*/ PPC::Runtime::ASM::fmadds(context->f0, context->f1, context->f2, context->f0);
/*802069C4 002037C4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x300, context->r29));
RUNTIME_PPC_JUMP_LABEL(.L_802069C8, 0x802069C8) //this is a jump label
/*802069C8 002037C8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r1));
/*802069CC 002037CC*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802069D0 002037D0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r1));
/*802069D4 002037D4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r1));
/*802069D8 002037D8*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*802069DC 002037DC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802069E0 002037E0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x90);
/*802069E4 002037E4*/ PPC::Runtime::ASM::blr();
}